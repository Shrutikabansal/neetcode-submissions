class Solution {
public:
    int maxArea(vector<int>& heights) {

        int startIndex = 0, endIndex = heights.size()-1;
        int maxArea = 0;
        while(startIndex < endIndex){
            int currentArea = min(heights[startIndex], heights[endIndex])*(endIndex-startIndex);
            maxArea = max(currentArea, maxArea);

            if (heights[startIndex] < heights[endIndex]){
                startIndex++;
            }else{
                endIndex--;
            }
        }

        return maxArea;
        
    }
};
