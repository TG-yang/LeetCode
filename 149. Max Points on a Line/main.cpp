#include <iostream>
#include <vector>
#include <map>

using namespace std;


struct Point {
    int x;
    int y;
    Point() : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}
};

class Solution {
public:
    int maxPoints(vector<Point>& points) {
        if(points.size() == 0)
            return 0;
        int max_num = 0;
        int same_point_num = 0;

        for(int i = 0; i < points.size(); ++i){
            map<long double,int>slope_map;
            same_point_num = 0;
            for(int j = 0; j < points.size(); ++j){

                if(i == j)
                    continue;
                if(points[i].x - points[j].x == 0 && points[i].y - points[j].y == 0)
                    ++same_point_num;
                else if(points[i].x - points[j].x == 0 && points[i].y - points[j].y != 0)
                    slope_map[INT_MAX]++;
                else
                    slope_map[((long double)(points[j].y - points[i].y)/(long double)(points[j].x - points[i].x)) * 100000000]++;

            }

            int temp_max = 0;
            for(map< long double,int>::iterator it = slope_map.begin();it != slope_map.end(); ++it){
                if(temp_max < it->second)
                    temp_max = it->second;
            }
            if(temp_max + same_point_num > max_num)
                max_num = temp_max + same_point_num;
        }

        return max_num + 1;
    }
};

int main() {

    vector<Point>points;
    points.push_back(Point(0,0));
    points.push_back(Point(94911151,94911150));
    points.push_back(Point(94911152,94911151));
    Solution*s;
    s->maxPoints(points);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}