class Solution {
public:
    int trap(vector<int>& height) {
        // with the help of leftMax & rightMax array => O(n) space

        // vector<int>leftMax(height.size(),0);
        // vector<int>rightMax(height.size(),0);
        // int trappedWater = 0;

        // leftMax[0] = height[0];
        // rightMax[height.size()-1] = height[height.size()-1];

        // for (int i=1; i<height.size(); i++){
        //     leftMax[i] = max(height[i], leftMax[i-1]);
        // }

        // for (int i=height.size()-2; i>=0; i--){
        //     rightMax[i] = max(height[i], rightMax[i+1]);
        // }

        // for (int i = 0;i<height.size();i++){
        //     trappedWater += (min(rightMax[i], leftMax[i]) -  height[i]);
        // }

        // return trappedWater;


        // Now let's try to reduce SC to O(1)
        // in this case we will try to find heighest wall and get the water on left & right to that wall

        int  leftIndex=0, rightIndex=height.size()-1, leftMax = height[leftIndex] , rightMax = height[rightIndex] ;

        int maxWater = 0;

        while(leftIndex < rightIndex){
            if (leftMax < rightMax){
                leftIndex++;
                leftMax = max(leftMax, height[leftIndex]);
                maxWater += leftMax - height[leftIndex];
            }else{
                rightIndex--;
                rightMax = max(rightMax, height[rightIndex]);
                maxWater += rightMax - height[rightIndex];
            }
        }

        return maxWater;

        
    }
};
