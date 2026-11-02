class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n = nums.size();

        unordered_map<int, int> hash;

        for(int i = 0; i < n; i++) {
            hash[nums[i]] = i;
        }

        for(int i = 0; i < n; i++) {
            if(nums[i] >= target) {
                return i;
            }
        }

        return n;
    }
};