class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return 0;
        }
         sort(nums.begin(),nums.end());
        
        int curr=0,lastSmallest=INT_MIN,largest=1;
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastSmallest){
                curr+=1;
                lastSmallest=nums[i];
            }
            else if(nums[i]!=lastSmallest){
                curr=1;
                lastSmallest=nums[i];
               
            }
           largest =max(largest,curr);
        }
          
        return largest;
           
    }
};