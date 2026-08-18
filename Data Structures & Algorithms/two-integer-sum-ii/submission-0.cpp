class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> indexAnswer;
        int startIndex = 0, endIndex = numbers.size()-1;
        // if your sum > target that means your right side value need to be reduced
        // if your sum < target that means your left side value need to be increased

        while ( startIndex < endIndex){
            int currentSum = numbers[startIndex] + numbers[endIndex];

            if (currentSum == target)
                break;
            
            if(currentSum < target){
                startIndex++;
            }else{
                endIndex--;
            }
        }

        indexAnswer.push_back(startIndex+1);
        indexAnswer.push_back(endIndex+1);

        return indexAnswer;
    }
};
