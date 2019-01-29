#include <iostream>
#include <vector>
#include <cmath>
#include <random>

using namespace std;

class Solution {
private:
    double radius, x_center, y_center;
    random_device rd;
    mt19937 gen;
    uniform_real_distribution<> randDeg, randRadius;

public:
    Solution(double radius, double x_center, double y_center): gen(rd()), randDeg(0, 2 * M_PI), randRadius(0, 1) {
        this->radius = radius;
        this->x_center = x_center;
        this->y_center = y_center;
    }

    vector<double> randPoint() {
        double r = sqrt(randRadius(gen)) * radius;  // !
        double deg = randDeg(gen);
        double x = x_center + r * cos(deg);
        double y = y_center + r * sin(deg);

        vector<double> ans;
        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj.randPoint();
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}