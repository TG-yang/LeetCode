#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>set1;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int i = 0, j = 0;
        int len1 = nums1.size();
        int len2 = nums2.size();

        while(i < len1 && j < len2){
            if(nums1[i] == nums2[j]){
                set1.insert(nums1[i]);
                ++i;++j;
            }else if(nums1[i] > nums2[j]){
                ++j;
            }else{
                ++i;
            }
        }
        vector<int>result(set1.begin(),set1.end());
        return result;
    }
};

int main() {
    Solution*solution;
    vector<int>nums1 = {1,2,2,1};
    vector<int>nums2 = {2,2};
    solution->intersection(nums1,nums2);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}