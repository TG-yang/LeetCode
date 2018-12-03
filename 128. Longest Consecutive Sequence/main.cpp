#include <iostream>
#include <vector>
#include <set>
#include <iterator>
using namespace std;

//
//class Solution {
//public:
//    int longestConsecutive(vector<int>& nums) {
//        if(nums.size() == 0)
//            return 0;
//        set<int>num(nums.begin(),nums.end());
//
//        sort(num.begin(),num.end());
//        vector<int>result(num.size(), 1);
//        int j = 0;
//        set<int>::iterator it = num.begin();
//        ++it;
//        while(it != num.end()){
//            if(*it-- == *it + 1)
//                result[j] += 1;
//            else
//                ++j;
//            ++it;++it;
//        }
//
//        sort(result.begin(),result.end());
//        return result[result.size() - 1];
//    }
//};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        set<int>num(nums.begin(),nums.end());
        vector<int>numvec(num.begin(),num.end());

        if(numvec.size() == 0)
            return 0;

        sort(numvec.begin(),numvec.end());
        vector<int>result(numvec.size(), 1);
        int j = 0;

        for(int i = 1; i < numvec.size(); ++i){
            cout << numvec[i]<<" ";
            if(numvec[i - 1] + 1 == numvec[i])
                result[j] += 1;
            else{
                ++j;
            }
        }
        sort(result.begin(),result.end());
        return result[result.size() - 1];
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}