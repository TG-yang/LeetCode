#include <iostream>
#include <vector>
#include <set>

using namespace std;


// This is the robot's control interface.
// You should not implement it, or speculate about its implementation
class Robot {
public:
    // Returns true if the cell in front is open and robot moves into the cell.
    // Returns false if the cell in front is blocked and robot stays in the current cell.
    bool move();

    // Robot will stay in the same cell after calling turnLeft/turnRight.
    // Each turn will be 90 degrees.
    void turnLeft();
    void turnRight();

    // Clean the current cell.
    void clean();
};

class Solution {
private:
    set<pair<int,int>>hashmap;
    int x = 0, y = 0;
    int dirX[4] = {1, 0, -1, 0};
    int dirY[4] = {0, 1, 0, -1};
    int dir = 0;
public:
    void cleanRoom(Robot& robot) {

        if(hashmap.count({x,y})) return;
        hashmap.insert({x,y});
        robot.clean();
        for(int i = 0; i < 4; ++i){
            if(robot.move()){
                x += dirX[dir];
                y += dirY[dir];
                cleanRoom(robot);
                robot.turnRight();
                robot.turnRight();
                robot.move();
                robot.turnRight();
                robot.turnRight();
                x -= dirX[dir];
                y -= dirY[dir];
            }
            robot.turnRight();
            dir = (dir + 1) % 4;
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}