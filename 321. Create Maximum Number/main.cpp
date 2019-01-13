#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {

        vector<int> result;
        vector<int>::iterator it1 = nums1.begin();
        vector<int>::iterator it2 = nums2.begin();

        for(int i = 0; i < k; ++i){

            if(*it1 > *it2 || it2 == nums2.end()){
                result.push_back(*it1);
                ++it1;
            }else if(*it1 <= *it2 || it1 == nums1.end()){
                result.push_back(*it2);
                ++it2;
            }
        }

        return result;
    }
};



int main() {

    Solution*solution;

    vector<int> nums1 = {3,4,6,5};
    vector<int> nums2 = {9,1,2,5,8,3};

    solution->maxNumber(nums1,nums2,5);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}