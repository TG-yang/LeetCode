#include <iostream>
#include <vector>
using namespace std;

class MedianFinder {
private:
    vector<int> res;
public:
    /** initialize your data structure here. */
    MedianFinder() {

    }

    void addNum(int num) {
        int left = 0, right = res.size() - 1;

        while(left <= right){
            int mid = (left + right) / 2;
            if(res[mid] < num){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        res.insert(res.begin() + left,num);
        //二分插入 可以确保顺序
    }

    double findMedian() {
        int size = res.size();
        if(size % 2 == 1){
            return res[size / 2];
        }else{
            int pre = res[size / 2 - 1];
            int cur = res[size / 2];

            return (double)(pre + cur) / 2.0;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}