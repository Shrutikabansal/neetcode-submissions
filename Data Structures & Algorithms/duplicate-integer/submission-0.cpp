class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       set<int>uniqueElements;

       for (int i=0;i<nums.size();i++){
        if(uniqueElements.find(nums[i])!=uniqueElements.end()){
            return true;
        }
        uniqueElements.insert(nums[i]);
       }
       return false;
    }
};