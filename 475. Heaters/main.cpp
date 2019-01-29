#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(),heaters.end(),less<int>());
        int res = 0;
        for(int i = 0; i < houses.size(); ++i){
            if(!binary_search(heaters.begin(),heaters.end(),houses[i])){
                int index = upper_bound(heaters.begin(),heaters.end(),houses[i]) - heaters.begin();
                int right = (index < heaters.size() ? heaters[index] - houses[i] : INT_MAX);
                int left =  (index > 0 ? houses[i] - heaters[index - 1] : INT_MAX);
                res = max(res, min(right,left));
            }
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}