#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> addOperators(string num, int target) {
        vector<string>result;
        if(num == "")
            return result;

        helper(result,"",num,target,0,0,0);

        return result;
    }

private:

    void helper(vector<string>&result,string path,string num,int target,int pos,long curRes, long preNum){
        if(pos == num.size()){
            if(curRes == target)
                result.push_back(path);

            return;
        }

        for(int i = pos; i < num.size(); ++i){

            if(i != pos && num[pos] == '0')
                return;

            long curNum = stol(num.substr(pos,i - pos + 1));

            if(pos == 0){
                helper(result,path + to_string(curNum),num,target,i + 1, curNum,curNum);
            }else{
                helper(result,path + '+' + to_string(curNum),num,target,i + 1, curRes + curNum, curNum);

                helper(result,path + '-' + to_string(curNum),num,target,i + 1, curRes - curNum, -curNum);

                helper(result,path + '*' + to_string(curNum),num,target,i + 1, curRes - preNum + preNum * curNum, curNum * preNum);
            }
        }
    }
};

int main() {
    Solution*solution;
    solution->addOperators("105",5);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}