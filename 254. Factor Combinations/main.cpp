#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Solution {
private:
    vector<vector<int>>result;
public:
    vector<vector<int>> getFactors(int n) {
        if(n == 1)
            return {};

        vector<int> item;
        helper(result,n,item,2);
        return result;
    }

private:

    void helper(vector<vector<int>>&result,int n,vector<int>&item,int factor){

        for(int i = factor; i <= sqrt(n); ++i){

            if(!(n % i)){

                vector<int> tmp = item;
                tmp.push_back(i);//push current factor
                helper(result, n/i,tmp,i);//find all other factor smaller than sqrt(n/i);
                tmp.push_back(n/i);//add n/i(the largest factor under current combination.
                result.push_back(tmp);
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}