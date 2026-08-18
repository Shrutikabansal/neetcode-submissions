class Solution {
public:
    int trap(vector<int>& height) {
        // with the help of leftMax & rightMax array => O(n) space

        vector<int>leftMax(height.size(),0);
        vector<int>rightMax(height.size(),0);
        int trappedWater = 0;

        leftMax[0] = height[0];
        rightMax[height.size()-1] = height[height.size()-1];

        for (int i=1; i<height.size(); i++){
            leftMax[i] = max(height[i], leftMax[i-1]);
        }

        for (int i=height.size()-2; i>=0; i--){
            rightMax[i] = max(height[i], rightMax[i+1]);
        }

        for (int i = 0;i<height.size();i++){
            trappedWater += (min(rightMax[i], leftMax[i]) -  height[i]);
        }

        return trappedWater;
        
    }
};
