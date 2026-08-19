class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if (s.size() == 0)
            return 0;
        set<char>uniqueChar;
        int start =0, end= 1, maxLength=1;
        uniqueChar.insert(s[start]);
        

        while(start<end && start<s.size() && end<s.size()){
            if(uniqueChar.find(s[end]) != uniqueChar.end()){
                uniqueChar.erase(s[start]);
                start++;
                if(start == end){
                    uniqueChar.insert(s[start]);
                    end++;
                }
            }else{
                uniqueChar.insert(s[end]);
                maxLength = max(maxLength, end-start+1);
                end++;
            }
        }
        
        return maxLength;
    }
};
