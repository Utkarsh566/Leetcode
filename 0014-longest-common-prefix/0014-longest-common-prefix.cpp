class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n=strs.size();
        for(int i=0;i<strs[0].length();i++){
            char ch=strs[0][i];
            for(int j=0;j<n;j++){
                if(i>=strs[j].length()||strs[j][i]!=ch){
                    return ans;
                }
            }
             ans+=ch;
        }
       return ans;
        
    }
};