class Solution {
public:
int findFirst(vector<int>&nums,int target){
    int n=nums.size();
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(high+low)/2;
        if(nums[mid]==target){
            ans=mid;
            high=mid-1;
        }
        else if(target>nums[mid]){
            low=mid+1;
        }
        else{
            high =mid-1;
        }

    }
    return ans;

}
int findLast(vector<int>&nums,int target){
    int n=nums.size();
    int low=0;
    int high=n-1;
     int ans=-1;
    while(low<=high){
        int mid=(high+low)/2;
        if(nums[mid]==target){
            ans=mid;
            low=mid+1;

        }
        else if(target>nums[mid]){
            low=mid+1;
        }
        else{
            high =mid-1;
        }

    }
return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int First=findFirst(nums,target);
        int Last=findLast(nums,target);
        return{First,Last};
    }
};