class Solution {
public:
    int characterReplacement(string s, int k) {
        

        // we will start from 0 and will go till end and check maxFreq ;
        // j-i+1 will be our length 
        // we will maintain maxFreq variable which will show max Freq till point
        // but 2 element can have same freq then how we will know how many char are replaced
        // j-i+1 will give total length if we subtract max freq and it is greater than k that means more than k elements is replaced

        int i=0, j, maxFreq = 1;
        int ans=0;
        map<int,int>freqMap;

        for(j=0; j<s.size();j++){
            freqMap[s[j]] += 1;
            maxFreq = max(maxFreq, freqMap[s[j]]);
            if((j-i+1-maxFreq > k)){
                freqMap[s[i]]--;
                i++;
            }else{
                ans = max(ans, j-i+1);
            }
        }
        return ans;

    }
};
