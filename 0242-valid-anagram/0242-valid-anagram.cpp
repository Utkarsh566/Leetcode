class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int >mpp;
        if(s.length()!=t.length()){
            return false;
        }
        for(char ch :s){
            mpp[ch]++;
        }
        for(char ch :t){
            mpp[ch]--;
        }
        for(char ch :s){
            if(mpp[ch] != 0){
                return false;
            }
        }
        return true;
    }
};