class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> answer(nums.size(),0);
        vector<int> productSum;
        int initialProduct = 1;
        // cout<< initialProduct<< endl;


        set<int>zeroIndex;
        for(int i=0;i< nums.size(); i++){
            if(nums[i] == 0){
                zeroIndex.insert(i);
            }
        }

        if (zeroIndex.size() > 1){
            return answer;
        }

        // cout<< zeroIndex.size() <<endl;

        for(int i=0;i< nums.size(); i++){
            if(nums[i] == 0){
                continue;
            }
            initialProduct *= nums[i];
        }

        // cout<< initialProduct<< endl;
        if(zeroIndex.size() == 0 ){
            for(int i=0;i< nums.size(); i++){
                answer[i] = initialProduct/nums[i];
            }
        }else{
            for(int i=0;i< nums.size(); i++){
                if (nums[i] == 0)
                    answer[i] = initialProduct;
            }
        }
        
        return answer;

    }
};
