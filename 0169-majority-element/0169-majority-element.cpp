class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int maxFreq=0;
        int ans=INT_MAX;
        for(auto it:mpp){
            if(it.second>maxFreq){
                maxFreq=it.second;
                ans=it.first;
            }
            else if(it.second==maxFreq){
                ans=min(ans,it.first);
            }
            
        }
        return ans;
    }

};