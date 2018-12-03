#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int>result(ratings.size(),1);
        int sum = 0;
        for(int i = 1; i < ratings.size(); ++i){

            if(ratings[i] > ratings[i - 1])
                result[i] = result[i - 1] + 1;
        }
        sum = result[ratings.size() - 1];
        for(int i = ratings.size() - 2; i >= 0; --i){

            if(ratings[i] > ratings[i + 1] && result[i] <= result[i + 1]){
                result[i] = result[i + 1] + 1;
            }
            sum += result[i];
        }

        return sum;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}