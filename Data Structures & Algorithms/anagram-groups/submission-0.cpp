class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> groupAnagramsData;
        map<string, vector<int> > indexMapping;

        for(int i=0; i<strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());

            // cout<< temp<< endl;

            (indexMapping[temp]).push_back(i);
        }

        // for (auto it = indexMapping.begin();it!= indexMapping.end(); it++ ){
        //     cout<< it->first;
        //     for (int i=0;i< it->second.size();i++){
        //         cout<< it->second[i] ;
        //     }
        //     cout<< endl;
        // }

        for (auto it= indexMapping.begin(); it!= indexMapping.end(); it++){
            vector<string> answer;
            for(int i = 0; i< (it->second).size() ; i++){
                answer.push_back(strs[it->second[i]]);
            }

            groupAnagramsData.push_back(answer);
        }
        return groupAnagramsData;

    

        

    }
};
