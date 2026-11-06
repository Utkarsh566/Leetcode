
class Solution {
public:
    bool isTrionic(vector<int>& nums) {

        int n = nums.size();
        int i = 0;

        // Increasing
        for(; i < n - 1; i++) {
            if(nums[i] >= nums[i + 1]) {
                break;
            }
        }

        if(i == 0) {
            return false;
        }

        // Decreasing
        for(; i < n - 1; i++) {
            if(nums[i] <= nums[i + 1]) {
                break;
            }
        }

        if(i == n - 1) {
            return false;
        }

        // Increasing
        for(; i < n - 1; i++) {
            if(nums[i] >= nums[i + 1]) {
                break;
            }
        }

        return i == n - 1;
    }
};
