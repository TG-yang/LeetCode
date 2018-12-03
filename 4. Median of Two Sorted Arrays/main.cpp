#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> newOne;
        vector<int>::iterator itnums1,itnums2;
        int newsize = 0;
        double  median = 0.0;
        itnums1 = nums1.begin();
        itnums2 = nums2.begin();
        while(itnums1 != nums1.end() && itnums2 != nums2.end()){

            if(*itnums1 >= *itnums2 ){
                newOne.push_back(*itnums2);
                ++itnums2;
            } else{
                newOne.push_back(*itnums1);
                ++itnums1;
            }

        }
        while(itnums1 != nums1.end()){
            newOne.push_back(*itnums1);
            ++itnums1;
        }
        while(itnums2 != nums2.end()){
            newOne.push_back(*itnums2);
            ++itnums2;
        }

        newsize = newOne.size();
        if(newsize % 2 == 0) {
            newsize = newsize / 2;
            median = ((double)(newOne[newsize] + newOne[newsize - 1])) / 2.0;
        }
        else{
            newsize = newsize / 2;
            median = newOne[newsize];
        }
        return median;
    }
};

int main() {
    Solution*s = new Solution();
    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3,4};
    std::cout << s->findMedianSortedArrays(nums1,nums2)<< std::endl;
    return 0;
}