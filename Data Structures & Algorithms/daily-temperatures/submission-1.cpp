class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>tempratureStack;
        vector<int> dailyTemperatures(temperatures.size(), 0);

        for(int i=temperatures.size()-1; i>=0; i--){
            if(tempratureStack.empty()){
                tempratureStack.push(i);
            }
            else{
                if(temperatures[i] < temperatures[tempratureStack.top()]){
                    dailyTemperatures[i] = tempratureStack.top() - i;
                    tempratureStack.push(i);

                    // cout<< i<< " "<< tempratureStack.top()<< " "<< dailyTemperatures[i] <<endl;
                }
                else{
                    while(!tempratureStack.empty() && (temperatures[i] >= temperatures[tempratureStack.top()])){
                        tempratureStack.pop();
                    }
                    if (tempratureStack.empty()){
                        tempratureStack.push(i);
                    }else{
                        dailyTemperatures[i] = tempratureStack.top() - i;
                        tempratureStack.push(i);

                    }
                }

            }
        }

        return dailyTemperatures;

    }
};
