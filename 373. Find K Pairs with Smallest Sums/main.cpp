#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

class Solution {
public:
    vector<pair<int, int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        multimap<int,pair<int,int>> result1;
        vector<pair<int,int>>result;

        if(nums1.size() == 0 || nums2.size() == 0)
            return result;

        int sum = 0;
        k = k > nums1.size() * nums2.size() ? nums1.size() * nums2.size(): k;

        for(int i = 0; i < nums1.size(); ++i){

            for(int j = 0; j < nums2.size(); ++j){

                int temp = nums1[i] + nums2[j];
                result1.insert(pair<int,pair<int,int>>(temp,pair<int,int>(nums1[i],nums2[j])));
            }
        }
        auto it = result1.begin();
        for(int i = 0; i < k; ++i){
            result.push_back(((*it).first,(*it).second));
            ++it;
        }

        return result;
    }
};

class Solution {
public:
    vector<pair<int, int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        int nums_1 = nums1.size();
        int nums_2 = nums2.size();
        vector<pair<int, int>> result;

        k = min(k,nums_1*nums_2);
        vector<int> indice(nums_1, 0);
        while(k-->0)
        {
            int temp_idx = 0;
            long temp_max = LONG_MAX;
            for(int i=0; i<nums_1; i++)
            {
                if(indice[i]<nums_2&&temp_max>=(nums1[i]+nums2[indice[i]]))
                {
                    temp_idx = i;
                    temp_max = nums1[i]+nums2[indice[i]];
                }
            }
            result.push_back(make_pair(nums1[temp_idx], nums2[indice[temp_idx]]));
            indice[temp_idx]++;
        }
        return result;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}