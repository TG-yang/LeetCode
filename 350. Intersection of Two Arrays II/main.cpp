#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int i = 0, j = 0;
        int len1 = nums1.size();
        int len2 = nums2.size();

        while(i < len1 && j < len2){

            if(nums1[i] == nums2[j]){
                result.push_back(nums1[i]);
                ++i, ++j;
            }else if(nums1[i] > nums2[j])
                ++j;
            else
                ++i;
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}