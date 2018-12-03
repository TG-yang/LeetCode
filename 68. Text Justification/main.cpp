#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int len = words.size();
        vector<string> result;
        int currSpace;
        int currWords;
        int i, j;
        for(i = 0; i < len; i += currSpace){
            string temp = "";
            currWords = 0;//当前单词总长
            currSpace = 0;//有几个单词
            int space = 0;//剩余空间
            for(j = i; j < len; ++j){
                currWords += words[j].size();
                ++currSpace;
                if(currWords + currSpace - 1> maxWidth)
                    break;
            }
            if(currWords + currSpace - 1> maxWidth){
                currWords -= words[j].size();
                --currSpace;
            }
            //非最后一行
            if(j < len){
                space = maxWidth - currWords;
                while(space){
                    if(currSpace == 1){
                        words[i] += ' ';
                        --space;
                    }
                    for(j = i; j < i + currSpace - 1 && space; ++j){
                        words[j] += ' ';//给每个单词一次加' '确保每个单词的空格尽量相同
                        --space;
                    }
                }
                for(j = i; j < i + currSpace; ++j)
                    temp += words[j];
            }else{
                //最后一行
                for(j = i; j < i + currSpace - 1; ++j){
                    words[j] += ' ';
                    temp += words[j];
                }
                temp += words[j];
                int lenTemp = temp.size();
                for(j = 0;j < maxWidth - lenTemp; ++j)
                    temp += ' ';

            }
            result.push_back(temp);
        }
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}