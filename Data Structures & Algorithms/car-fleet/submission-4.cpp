class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        // in this if we think we get the timing for each car will take to reach the target 
        // now if left side car is going faster then it will come across to right one and will take same time/speed as right one
        // so this is what we are going to do

        // let's sort as per the position so make a map nd value will be time

        map<int, double>postionSpeedMap;
        stack<double> fleetCars;

        for(int i=0; i<position.size(); i++){
            postionSpeedMap[position[i]] = (double(target - position[i])/double(speed[i]));
            // if ((target - position[i])%speed[i]){
            //     postionSpeedMap[position[i]] += 1;
            // }
        }

        // for(auto it=postionSpeedMap.begin(); it!=postionSpeedMap.end(); it++){
        //     if(fleetCars.empty()){
        //         fleetCars.push(it->second);
        //     }else{
        //         if(it->second < fleetCars.top()){
        //             fleetCars.push(it->second);
        //         }else{
        //             while(!fleetCars.empty() && (it->second >= fleetCars.top()))
        //                 fleetCars.pop();
        //             fleetCars.push(it->second);
        //         }
        //     }
        // }
        // return fleetCars.size();



        // Let's optimise this code

        for(auto it=postionSpeedMap.begin(); it!=postionSpeedMap.end(); it++){
             while(!fleetCars.empty() && (it->second >= fleetCars.top()))
                    fleetCars.pop();
                fleetCars.push(it->second);
                
        }
        
        return fleetCars.size();






        
    }
};
