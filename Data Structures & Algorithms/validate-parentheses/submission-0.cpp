class Solution {
public:

    bool isOpenParathesis(char c){
        if (c == '(' || c == '{' || c == '['){
            return true;
        }
        return false;
    }
    bool isCloseParathesis(char c){
        if (c == ')' || c == '}' || c == ']'){
            return true;
        }
        return false;
    }

    bool isOpenClosedMatch(char o, char c){
        if (o == '(' && c == ')')
            return true;
         if (o == '{' && c == '}')
            return true;
        if (o == '[' && c == ']')
            return true;

        return false;
    }

    bool isValid(string s) {
        stack<char>st;

        for (int i=0; i< s.size(); i++){
            if (isOpenParathesis(s[i])){
                st.push(s[i]);
            }else{
                if(st.empty()){
                    return false;
                }else{
                    if(!isOpenClosedMatch(st.top(), s[i])){
                        return false;
                    }
                    st.pop();
                }
            }
        }

        if(!st.empty()){
            return false;
        }
        return true;
    }
};
