#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {

        string three = "Fizz";
        string five = "Buzz";
        string threeFive = "FizzBuzz";
        vector<string>result;

        for(int i = 1; i <= n; ++i){

            if(i % 3 == 0 && i % 5 == 0)
                result.push_back(threeFive);
            else if(i % 3 == 0){
                result.push_back(three);
            }else if(i % 5 == 0){
                result.push_back(five);
            }else{
                result.push_back(to_string(i));
            }
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}