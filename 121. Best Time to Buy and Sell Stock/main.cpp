#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        if(prices.size() == 0 || prices.size() == 1)
//            return 0;
//         int result = 0;
//         for(int i = 0; i < prices.size() - 1; ++i){
//             vector<int>::iterator it = prices.begin() + i + 1;
//             int tmp = *max_element(it, prices.end()) - prices[i];
//             result = max(tmp,result);
//         }
//         return result;
//    }
//};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0 || prices.size() == 1)
            return 0;
        int result = 0;
        int mintans = INT_MAX;
        for(int i = 0; i < prices.size();++i){
            mintans = min(mintans,prices[i]);
            result = max(result, prices[i] - mintans);
        }
        return result;
    }
};


int main() {
    vector<int>prices{7,1,5,3,6,4};
    Solution*s;
    s->maxProfit(prices);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}