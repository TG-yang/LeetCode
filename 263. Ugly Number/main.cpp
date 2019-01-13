#include <iostream>

using namespace std;

class Solution {
private:
    int ugly = 0;
public:
    bool isUgly(int num) {

        if(num == 0 || num == 1)
            return true;

        helper(num);

        return ugly;
    }

    void helper(int num){

        if(num == 1){
            ugly = 1;
            return;
        }

        if(num % 2 == 0)
            helper(num / 2);
        if(num % 3 == 0)
            helper(num / 3);
        if(num % 5 == 0)
            helper(num / 5);



        return;
    }
};

int main() {

    Solution*s;
    s->isUgly(6);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}