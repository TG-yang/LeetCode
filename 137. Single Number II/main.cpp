#include <iostream>
#include <vector>

using namespace std;


struct Node{
    int value;
    int number;
    Node(int x, int y):value(x),number(y){}
};

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        if(nums.size() == 1)
            return nums[0];

        sort(nums.begin(),nums.end());

        int i;
        for(i = 0; i < nums.size(); i += 3){

            if(nums[i] != nums[i + 1])
                return nums[i];

        }

        return nums[i];

    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}