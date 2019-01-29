#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        unordered_map<string,int>hash;
        int maxy = INT_MIN, miny = INT_MAX;
        int maxx = INT_MIN, minx = INT_MAX;
        int area = 0;

        for(auto item : rectangles){
            // 统计四个Corner的值
            maxy = max(maxy, item[3]);
            miny = min(miny, item[1]);
            maxx = max(maxx, item[2]);
            minx = min(minx, item[0]);
            // 逐一计算面积累加
            area += (item[2] - item[0]) * (item[3] - item[1]);
            // 判断是否有overlap
            if(!isValid(hash, to_string(item[0]) + '-' + to_string(item[1]), 1)) return false;
            if(!isValid(hash, to_string(item[0]) + '-' + to_string(item[3]), 2)) return false;
            if(!isValid(hash, to_string(item[2]) + '-' + to_string(item[1]), 4)) return false;
            if(!isValid(hash, to_string(item[2]) + '-' + to_string(item[3]), 8)) return false;
        }
        int count = 0;
        for(auto it = hash.begin(); it != hash.end(); ++it){

            if(it->second == 1 || it->second == 2 || it->second == 4 || it->second == 8)
                ++count;
        }
        if(count == 4 && (area == (maxy - miny) * (maxx - minx)))
            return true;
        else
            return false;
    }

private:
    bool isValid(unordered_map<string,int>&hash,string corner,int type){

        int&val = hash[corner];
        if(val & type) return false;
        val |= type;
        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}