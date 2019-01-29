#include <iostream>
#include <vector>

using namespace std;


class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {}

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};

class Solution {
public:
    Node* construct(vector<vector<int>>& grid) {
        return helper(grid,0,0,grid.size());
    }

private:
    Node* helper(vector<vector<int>>&grid, int x, int y, int len){
        if(len <= 0) return NULL;
        for(int i = x; i < len + x; ++i){
            for(int j = y; j < len + y; ++j){
                if(grid[i][j] != grid[x][y]){
                    return new Node(true,false,
                            helper(grid, x, y,len/2),
                            helper(grid, x, y + len/2, len/2),
                            helper(grid, x + len/2, y, len/2),
                            helper(grid, x + len/2, y + len/2, len/2));
                }
            }
        }
        return new Node(grid[x][y] == 1, true,NULL,NULL,NULL,NULL);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}