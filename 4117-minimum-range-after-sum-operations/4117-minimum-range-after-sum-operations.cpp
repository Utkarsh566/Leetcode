class Solution {
public:
    int minRange(int a, int b, int c) {
        long long x = min({a, b, c});
        long long z = max({a, b, c});
        long long y = 1LL * a + b + c - x - z;
        return min(z - x, y);
    }
};