class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        // we will maintain a deque and maintain the max after any number 

        int n = nums.size();
        vector<int> maxArray(n-k+1);
        deque<int>dq;

        int maxArrayIndex=0, start=0;

        while(start < n){
            // if your current index value is greater than the previous index that mean those can not be the max for the window
            while(!dq.empty() && nums[dq.back()] < nums[start])
                dq.pop_back();
            dq.push_back(start);

            if(maxArrayIndex > dq.front())
                dq.pop_front();
            
            if(start+1 >= k){
                maxArray[maxArrayIndex] = nums[dq.front()];
                maxArrayIndex++;
            }

            start++;
        }

        return maxArray;

        
    }
};
