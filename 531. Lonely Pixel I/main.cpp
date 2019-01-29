#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findLonelyPixel(vector<vector<char>>& picture) {
        int cnt = 0;
        for(int i = 0; i < picture.size(); ++i){
            for(int j = 0; j < picture[0].size(); ++j){
                if(picture[i][j] == 'B'){
                    if(isLone(picture,i,j) == true){
                        ++cnt;
                    }
                    break;
                }
            }
        }
        return cnt;
    }

private:
    bool isLone(vector<vector<char>>& picture, int x, int y){
        int cnt = 0;
        for(int j = 0; j < picture[0].size(); ++j){
            if(picture[x][j] == 'B')
                ++cnt;
            if(cnt > 1)
                break;
        }
        if(cnt > 1)
            return false;
        cnt = 0;
        for(int i = 0; i < picture.size(); ++i){
            if(picture[i][y] == 'B')
                ++cnt;
            if(cnt > 1)
                break;
        }
        if(cnt > 1)
            return false;

        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}