#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//        int j = 0;
//        for(int i = m; i < m + n; ++i){
//            nums1[i] = nums2[j++];
//        }
//        sort(nums1.begin(),nums1.end());
//    }
//};
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int mindex = 0;
        for(int i = 0; i < n; ++i){
            while(nums2[i] >= nums1[mindex] && mindex < m){
                mindex;
            }
            nums1.insert(nums1.begin() + mindex,nums2[i]);
            ++m;
        }
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}