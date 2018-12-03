#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<int>potentialStartStation;
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        findPotentialStation(gas,cost);
        if(potentialStartStation.size() == 0)
            return -1;

        int size = gas.size();
        for(int i = 0; i < potentialStartStation.size(); ++i){

            int index = potentialStartStation[i];
            int startIndex = index;
            int diff = gas[index] - cost[index];
            while(diff >= 0){

                index = (index + 1) % size;
                diff += gas[index] - cost[index];
                // cout << diff << " ";
                if(startIndex == index && diff >= 0)
                    return startIndex;
            }
            // cout << endl;
        }

        return -1;
    }

    void findPotentialStation(vector<int>gas,vector<int>cost){

        for(int i = 0; i < gas.size(); ++i){
            if(gas[i] >= cost[i]){
                potentialStartStation.push_back(i);
                //cout << i << " ";
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}