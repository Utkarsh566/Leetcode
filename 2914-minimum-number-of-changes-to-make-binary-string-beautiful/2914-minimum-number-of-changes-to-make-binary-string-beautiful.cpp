class Solution {
public:
    int minChanges(string s) {
         const int n=s.size();
        int cost=0;
        for(int i=0;i<n;i+=2)
            cost+=(s[i]!=s[i+1]);
              return cost;
        
      
        
    }
};