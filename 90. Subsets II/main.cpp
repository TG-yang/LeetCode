#include <iostream>
#include <vector>
#include <map>

using namespace std;

//class Solution {
//private:
//    vector<vector<int>>result;
//public:
//    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//        vector<int>oneChind;
//
//        for(int i = 0; i <= nums.size(); ++i){
//            dfs(oneChind,nums,0,i);
//        }
//
//        return result;
//    }
//
//private:
//    void dfs(vector<int>oneChind,vector<int>&nums,int start,int k){
//
//        if(oneChind.size() == k && !Compare(oneChind,result)){
//            result.push_back(oneChind);
//            return;
//        }else{
//
//            for(int i = start; i < nums.size(); ++i){
//                oneChind.push_back(nums[i]);
//                dfs(oneChind,nums,i + 1,k);
//                oneChind.pop_back();
//            }
//        }
//    }
//    bool Compare(vector<int>num1,vector<vector<int>>num2){
//
//        for(int i = 0; i < num2.size(); ++i){
//            vector<int>num3 = num2[i];
//
//            if(num1.size() != num3.size())
//                return false;
//
//            int j = 0;
//            while (j < num1.size() && j < num3.size()){
//                if(num1[j] == num3[j])
//                    return true;
//                ++j;
//            }
//        }
//        return false;
//    }
//};
class Solution{
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums){
        vector<vector<int>>result;
        vector<int>empty;
        result.push_back(empty);
        sort(nums.begin(),nums.end());
        map<int,int>count;

        for(int i = 0; i < nums.size(); ++i)
            ++count[nums[i]];
        vector<int>::iterator it = unique(nums.begin(),nums.end());
        nums.erase(it,nums.end());

        for(int i = 0; i < nums.size();++i){
            int size = result.size();

            for(int j = 0; j < size; ++j){
                vector<int>temp = result[j];

                for(int m = 0; m < count[nums[i]]; ++m){
                    temp.push_back(nums[i]);
                    result.push_back(temp);
                }
            }
        }
        return result;
    }
};
int main() {
    Solution*s = new Solution();
    vector<int>nums{1,2,2};
    s->subsetsWithDup(nums);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}