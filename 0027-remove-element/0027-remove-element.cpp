class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int sum = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == val) {
                sum++;
            }
            else {
                nums[i - sum] = nums[i];
            }
        }

        int ans = n - sum;

        return ans;
    }
};