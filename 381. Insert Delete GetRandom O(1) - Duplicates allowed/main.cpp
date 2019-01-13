#include <iostream>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <stack>
using namespace std;

//class RandomizedCollection {
//private:
//    unordered_map<int,stack<int>>valPos;
//    vector<int>vec;
//public:
//    /** Initialize your data structure here. */
//    RandomizedCollection() {
//
//    }
//
//    /** Inserts a value to the collection. Returns true if the collection did not already contain the specified element. */
//    bool insert(int val) {
//        int isExist = 0;
//        if(valPos.count(val))
//            isExist = 1;
//
//        valPos[val].push(vec.size());
//        vec.push_back(val);
//
//        return isExist == 0;
//
//    }
//
//    /** Removes a value from the collection. Returns true if the collection contained the specified element. */
//    bool remove(int val) {
//
//        if(valPos.count(val) == 0)
//            return false;
//
//        if(vec.back() != val){
//            int pos = valPos[val].top();
//            valPos[vec.back()].pop();
//            valPos[vec.back()].push(pos);
//
//            swap(vec[pos], vec[vec.size()-1]);
//        }
//        valPos[val].pop();
//        vec.pop_back();
//        if(valPos[val].empty())
//            valPos.erase(val);
//
//        return true;
//    }
//
//    /** Get a random element from the collection. */
//    int getRandom() {
//
//        return vec[rand() % vec.size()];
//    }
//};

class RandomizedCollection {
private:
    vector<int> nums;
    unordered_map<int, unordered_set<int>> memo;

public:
    /** Initialize your data structure here. */
    RandomizedCollection() {
        // placeholder
    }

    /** Inserts a value to the collection. Returns true if the collection did not already contain the specified element. */
    bool insert(int val) {
        int pos = nums.size();
        nums.push_back(val);
        auto iter = memo.find(val);
        if (iter == memo.end()) {
            memo[val].insert(pos);
            return true;
        } else {
            iter->second.insert(pos);
            return false;
        }
    }

    /** Removes a value from the collection. Returns true if the collection contained the specified element. */
    bool remove(int val) {
        auto iter = memo.find(val);
        if (iter == memo.end()) return false;
        int pos = * iter->second.begin();
        if (iter->second.size() == 1) {
            memo.erase(iter);
        } else {
            iter->second.erase(iter->second.begin());
        }

        int lastVal = nums.back();
        nums[pos] = lastVal;

        iter = memo.find(lastVal);
        if (iter != memo.end()) {
            iter->second.erase(nums.size() - 1);
            iter->second.insert(pos);
        }
        nums.pop_back();
        return true;
    }

    /** Get a random element from the collection. */
    int getRandom() {
        int pos = std::rand() % nums.size();
        return nums[pos];
    }
};


/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection obj = new RandomizedCollection();
 * bool param_1 = obj.insert(val);
 * bool param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}