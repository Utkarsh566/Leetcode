
class Solution {
public:
    bool possible(vector<int>& arr, int day, int m, int k) {
        int count = 0;
        int noofB = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= day) {
                count++;
            }
            else {
                noofB += (count / k);
                count = 0;
            }
        }

        noofB += (count / k);

        return noofB >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m * 1LL * k;

        int n = bloomDay.size();

        if (val > n) return -1;

        int maxi = INT_MIN;
        int mini = INT_MAX;

        for (int i = 0; i < n; i++) {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }

        int low = mini, high = maxi;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (possible(bloomDay, mid, m, k)) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};
