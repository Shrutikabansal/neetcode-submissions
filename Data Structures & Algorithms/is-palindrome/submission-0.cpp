class Solution {
public:

    bool isAlphaNumeric(char c){
        if (c >= 'A' && c <= 'Z' ||
            c >= 'a' && c <= 'z' ||
            c >= '0' && c <= '9'){
                return true;
            }
        return false;
    }

    bool isPalindrome(string s) {
        int startIndex = 0, endIndex = s.size()-1;

        while(startIndex < endIndex){
            // check alphanumeric for start & end index
            while(startIndex < endIndex && !isAlphaNumeric(s[startIndex])){
                startIndex++;
            }
            while(startIndex < endIndex && !isAlphaNumeric(s[endIndex])){
                endIndex--;
            }            
            
            if(tolower(s[startIndex]) != tolower(s[endIndex])){
                return false;

            }
            endIndex--;
            startIndex++;
        }

        return true;
        
    }
};
