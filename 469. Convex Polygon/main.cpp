#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isConvex(vector<vector<int>>& points) {

        int temp = 0, next = 0;
        int n = points.size();
        for(int i = 0; i < n; ++i){
            next = helper(points[i],points[(i+1)%n],points[(i+2)%n]);
            if(next){
                if(temp*next<0) return 0;
                temp=next;
            }
        }
        return 1;
    }

private:

    int helper(vector<int>&a, vector<int>&b, vector<int>&c){

        int res = (a[1]-b[1])*c[0]-c[1]*(a[0]-b[0])+a[0]*b[1]-a[1]*b[0];
        return res == 0 ? 0 : res > 0? 1 : -1;
    }
};

class Solution {
    int judge_side(vector<int>& a,vector<int> & b,vector<int> & c)//判断点与线的相对位置
    {
        int ans = (a[1]-b[1])*c[0]-c[1]*(a[0]-b[0])+a[0]*b[1]-a[1]*b[0];
        return ans==0?0:ans<0?-1:1;
    }
public:
    bool isConvex(vector<vector<int>>& points) {
        int n=points.size();
        int i,j;
        int turn=0,next=0;
        for(i=0;i<n;i++)
        {
            next=judge_side(points[i],points[(i+1)%n],points[(i+2)%n]);
            if(next)
            {
                if(turn*next<0) return 0;
                turn=next;
            }
        }
        return 1;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}