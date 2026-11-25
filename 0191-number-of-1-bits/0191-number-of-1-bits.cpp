class Solution {
public:
    int hammingWeight(int n) {
         string ans = "";
         int a=0;

    while(n > 0) {
        int rem = n % 2;
        ans += to_string(rem);
        n = n / 2;
    }

    reverse(ans.begin(), ans.end());
   for(int i = 0; i < ans.length(); i++) {
            if(ans[i] == '1') {
                a++;
            }
        }
        return a ;        
    }
};