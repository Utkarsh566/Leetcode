class Solution {
public:
    int maxArea(vector<int>& height) {
        int area =0;
        int currArea=0;
        int n=height.size();
        int left =0;
        int right= n-1;
      while(left<right){
        currArea=(right-left)*min(height[right],height[left]);
        area=max(currArea,area);
        if(height[left]<height[right]){
            left++;
        }
        else right--;
       

      }
      return area;
        

    }
};