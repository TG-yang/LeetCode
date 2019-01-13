#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//public:
//    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
//        nums.push_back(upper+1);
//        vector<string> result;
//        for(int i = 0, cover = lower-1; i < nums.size(); i++)
//        {
//            if(nums[i]-cover == 2) result.push_back(to_string(cover+1));
//            else if(nums[i]-cover > 2)
//                result.push_back(to_string(cover+1)+"->"+to_string(nums[i]-1));
//            cover = nums[i];
//        }
//        return result;
//    }
//};

class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {

        vector<string> ans;
        if (nums.empty()){
            add_range((long)lower - 1, (long)upper + 1, ans);
        }
        else {
            add_range((long)lower - 1, nums.front(), ans);

            for (int i = 0; i < nums.size() - 1; ++i)
                add_range(nums[i], nums[i+1], ans);

            add_range(nums.back(), (long)upper + 1, ans);
        }
        return ans;
    }
private:
    void add_range(long a, long b, vector<string>& ans){
        if (a + 1 == b - 1){
            ans.push_back(to_string(a+1));
        }
        else if( a + 1 < b - 1){
            ans.push_back(to_string(a+1) + "->" + to_string(b-1));
        }
    }
};




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}