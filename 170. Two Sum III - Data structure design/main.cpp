#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

//class TwoSum {
//private:
//    vector<int>vec;
//public:
//    /** Initialize your data structure here. */
//    TwoSum() {
//
//    }
//
//    /** Add the number to an internal data structure.. */
//    void add(int number) {
//        auto it = lower_bound(vec.begin(),vec.end(),number);
//        vec.insert(it,number);
//    }
//
//    /** Find if there exists any pair of numbers which sum is equal to the value. */
//    bool find(int value) {
//
//        int begin = 0;
//        int end = vec.size() - 1;
//
//        int val = value / 2;
//        auto it = lower_bound(vec.begin(),vec.end(),val);
//
//        auto left = it - 1;
//        auto right = it;
//
//        while(it >= vec.begin() && right <= vec.end()){
//
//            if(vec[*left] + vec[*right] == value)
//                return true;
//            else if(vec[*left] + vec[*right] > value){
//                --left;
//            }else{
//                ++right;
//            }
//        }
//
//        return false;
//    }
//};

class TwoSum {
public:
    void add(int number) {
        ++m[number];
    }
    bool find(int value) {
        for (auto a : m) {
            int t = value - a.first;
            if ((t != a.first && m.count(t)) || (t == a.first && a.second > 1)) {
                return true;
            }
        }
        return false;
    }
private:
    unordered_map<int, int> m;
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum obj = new TwoSum();
 * obj.add(number);
 * bool param_2 = obj.find(value);
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}