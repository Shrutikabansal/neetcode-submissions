class Solution {
public:

    int evalRPN(vector<string>& tokens) {

        int answer;
        stack<int>st;
        int firstNumber, secondNumber;

        for (int i=0; i< tokens.size(); i++){
            if(tokens[i] == "+"){
                firstNumber = st.top();
                st.pop();
                secondNumber = st.top();
                st.pop();
                st.push(secondNumber + firstNumber);
            }else if(tokens[i] == "-"){
                firstNumber = st.top();
                st.pop();
                secondNumber = st.top();
                st.pop();
                st.push(secondNumber - firstNumber);
            }else if(tokens[i] == "*"){
                firstNumber = st.top();
                st.pop();
                secondNumber = st.top();
                st.pop();
                st.push(secondNumber * firstNumber);
            }else if(tokens[i] == "/"){
                firstNumber = st.top();
                st.pop();
                secondNumber = st.top();
                st.pop();
                st.push(secondNumber / firstNumber);
            }else {
                st.push(stoi(tokens[i]));
            }
                
        }

        return st.top();
        
        
    }
};
