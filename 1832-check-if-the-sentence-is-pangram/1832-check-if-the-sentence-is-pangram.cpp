class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        unordered_map<char,int>mpp;
        for(int i=0;i<sentence.length();i++){
            char ch=sentence[i];
            cout<<ch;
            mpp[ch]++;
        }
        for(char ch='a';ch<='z';ch++){
            if(mpp[ch]==0){
                return false;
            }
        }
        return true ;
    }
};