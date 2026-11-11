class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mpp;

        for(char ch : text) {
            mpp[ch]++;
        }

        int ans = min({
            mpp['b'],
            mpp['a'],
            mpp['n'],
            mpp['l']/2,
            mpp['o']/2
        });

        return ans;
    }
};