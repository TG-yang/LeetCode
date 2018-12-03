#include <iostream>
#include <string>

using namespace std;

class Solution {
private:
    string res = "";
public:
    string convertToTitle(int n) {

        convertToTitle1(n);

        return res;
    }

    void convertToTitle1(int n){

        if(n > 26){
            int temp = n / 26;
            n = n % 26;
            if(n == 0){
                temp--;
                n = 26;
                res += (char)(64 + temp);
            }else if (temp > 26){
                convertToTitle1(temp);
            }else{
                res += (char)(64 + temp);
            }

        }
        res += (char)(64 + n);
    }
};
//65
int main() {
    Solution*s;
    s->convertToTitle(701);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}