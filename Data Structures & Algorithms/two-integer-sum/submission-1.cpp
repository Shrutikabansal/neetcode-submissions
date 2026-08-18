class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, int>indexMap;
        vector<int>answer;

        for(int i=0;i<nums.size(); i++){
            if(indexMap.find(target-nums[i]) == indexMap.end()){
                indexMap[nums[i]] = i;
            }
            else{
                int index1 = indexMap[target-nums[i]];
                if (index1 > i){
                    answer.push_back(i);
                    answer.push_back(index1);
                }else{
                    answer.push_back(index1);
                    answer.push_back(i);
                }
            }
        }
        return answer;
        
    }
};
