class Solution {
public:

struct compareF {
    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
       if(p1.second == p2.second)
            return p1.first < p2.first;
        
        return p1.second < p2.second;
    }
};


    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>frequencyMap;
        vector<int> topKFrequentElement;

        for(int i=0;i<nums.size();i++){
            frequencyMap[nums[i]] += 1;
        }

        priority_queue< pair<int, int> > pq;

        for (auto it : frequencyMap){
            pq.push({it.second, it.first});
        }

        for (int i=0;i<k;i++){
            topKFrequentElement.push_back((pq.top()).second);
            pq.pop();
        }

        return topKFrequentElement;

    }
};
