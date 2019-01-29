#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool sequenceReconstruction(vector<int>& org, vector<vector<int>>& seqs) {

        int lenOrg = org.size();
        unordered_map<int,int>prePos,pos;
        //保持org中每个数对应的位置,即：根据数值大小找到相对应的位置，相当于map，给出数和坐标的映射
        for(int i = 0; i < lenOrg; ++i){
            pos[org[i]] = i;
        }

        for(auto seq : seqs){
            for(int i = 0; i < seq.size(); ++i){
                if(!pos.count(seq[i]))
                    return false;
                //每次判断seqs中相对位置是否和org一致！！
                if(i > 0 && pos[seq[i]] <= pos[seq[i - 1]])
                    return false;

                if(!prePos.count(seq[i])){
                    prePos[seq[i]] = i > 0 ? pos[seq[i - 1]] : -1;
                }else{
                    prePos[seq[i]] = max(prePos[seq[i]], i > 0 ? pos[seq[i - 1]] : -1);
                    //存最大的坐标，例如：seqs=[[1,3],[2,3]],org=[1,2,3]。3的priorPos第一次是１在org中的位置＝０;然后发现３的前面２在org中位置更大＝１，所以替换成１！
                }
            }
        }

        for(int i = 0; i < org.size(); ++i){
            if(prePos[org[i]] != i - 1)
                return false;
        }

        return true;
    }
};

class Solution {
public:
    bool sequenceReconstruction(vector<int>& org, vector<vector<int>>& seqs) {
        unordered_map<int, int> m, pre;
        for (int i = 0; i < org.size(); ++i) m[org[i]] = i;
        for (auto& seq : seqs) {
            for (int i = 0; i < seq.size(); ++i) {
                if (!m.count(seq[i])) return false;
                if (i > 0 && m[seq[i - 1]] >= m[seq[i]]) return false;
                if (!pre.count(seq[i])) {
                    pre[seq[i]] = (i > 0) ? m[seq[i - 1]] : -1;
                } else {
                    pre[seq[i]] = max(pre[seq[i]], (i > 0) ? m[seq[i - 1]] : -1);
                }
            }
        }
        for (int i = 0; i < org.size(); ++i) {
            if (pre[org[i]] != i - 1) return false;
        }
        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}