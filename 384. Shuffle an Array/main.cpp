#include <iostream>
#include <vector>
#include <random>

using namespace std;

class Solution {
public:
    Solution(vector<int> nums):org(nums) {

    }

    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return org;
    }

    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        int len = org.size();
        vector<int> temp(org);

        static default_random_engine e;

        for(int i = 0; i < len; ++i){

            uniform_int_distribution<unsigned> u(0,len - 1);

            unsigned int m = u(e);
            if(m != i)
                swap(temp[i],temp[m]);
        }

        return temp;
    }

private:
    vector<int>org;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}