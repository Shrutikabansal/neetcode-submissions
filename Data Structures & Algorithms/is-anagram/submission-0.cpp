class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int>frequencyMap;

        if (s.size() != t.size()){
            return false;
        }

        for(int i=0;i<s.size();i++){
            frequencyMap[s[i]] += 1;
        }
        
        for(int i=0;i<t.size();i++){
            if (frequencyMap.find(t[i]) == frequencyMap.end()){
                return false;
            }

            if(frequencyMap[t[i]]<=0){
                return false;
            }

            frequencyMap[t[i]] -= 1;
            
        }

        return true;

    }
};
