class Solution {
public:
    int sum(vector<int>&weights){
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
        }
        return sum;
    }

    int find(vector<int>&weights,int cap){
        int days=1,load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>cap){
                days++;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>&weights,int days){
        int low=*max_element(weights.begin(),weights.end());
        int high=sum(weights);
        while(low<=high){
            int mid=(low+high)/2;
            int noOfDays=find(weights,mid);
            if(noOfDays<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};