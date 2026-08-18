class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> s(nums.begin(), nums.end());
        int longestSequence = 0;
        // let's do this by finding left & right numbers

        for (int i=0; i<nums.size(); i++){
            // let's check is it starting number?
            if(s.find(nums[i]-1) == s.end()){ // if there is no left element then it is starting one
                int currentlength = 1;
                while(s.find(nums[i]+currentlength) != s.end()){
                    currentlength++;
                }

                longestSequence = max(longestSequence, currentlength);

            }
        }

        // here it is o(n) as we will run while loop if we find leftmost element

        return longestSequence;

        
    }
};
