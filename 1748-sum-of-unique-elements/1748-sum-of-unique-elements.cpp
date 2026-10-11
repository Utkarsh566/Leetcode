class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int n:nums){
            mpp[n]++;
        }
        int sum=0;
        for(int n:nums){
            if(mpp[n]==1){
                sum+=n;
                mpp[n]=0;
            }
        }
        return sum;
        
    }
};