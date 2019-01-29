#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <unordered_set>
using namespace std;

//class Solution {
//private:
//    bool success = false;
//    int laststone;
//public:
//    bool canCross(vector<int>& stones) {
//        unordered_map<int,int>hash;
//        for(auto stone : stones)
//            hash[stone]++;
//        laststone = stones[stones.size() - 1];
//
//        if(stones[1] != 1)
//            return false;
//
//        int pos = stones[1];
//        int k = stones[1];
//        helper(hash,pos,k,1);
//
//        return success;
//    }
//
//private:
//    void helper(unordered_map<int,int> hash, int pos, int k, int step){
//
//        if(pos == laststone){
//            success = true;
//            return;
//        }
//        if(step > hash.size())
//            return;
//
//        if(hash.count(pos + k))
//            helper(hash,pos + k, k, step + 1);
//        if(hash.count(pos + k + 1))
//            helper(hash,pos + k + 1, k + 1, step + 1);
//        if(hash.count(pos + k - 1))
//            helper(hash,pos + k - 1, k - 1, step + 1);
//
//        return;
//
//    }
//};

class Solution {
private:
    unordered_set<string> jumpMap;

public:
    bool canCross(vector<int>& stones) {
        unordered_set<int> stoneMap;

        for(int i = 0; i < stones.size(); ++i) stoneMap.insert(stones[i]);

        return helper(stones, 0, 0, stoneMap);
    }

    bool helper(vector<int>& stones, int lastJump, int curPos, unordered_set<int>& stoneMap){
        if(curPos == stones.back()) {
            return true;
        }

        string temp = to_string(lastJump) + " " + to_string(curPos);
        if(jumpMap.find(temp) != jumpMap.end()) return false;
        jumpMap.insert(temp);

        if(lastJump > 1 && stoneMap.find(curPos + lastJump - 1) != stoneMap.end()){
            if(helper(stones, lastJump-1, curPos + lastJump - 1, stoneMap)) return true;
        }

        if(lastJump > 0 && stoneMap.find(curPos + lastJump) != stoneMap.end()){
            if(helper(stones, lastJump, curPos + lastJump, stoneMap)) return true;
        }
        if(stoneMap.find(curPos + lastJump + 1) != stoneMap.end()){
            if(helper(stones, lastJump + 1, curPos + lastJump + 1, stoneMap)) return true;
        }

        return false;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}