#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string validIPAddress(string IP) {
        if(isIPV4(IP))
            return "IPv4";
        if(isIPV6(IP))
            return "IPv6";
        return "Neither";
    }

private:
    bool isIPV4(string IP){
        string temp = "";
        int count = 0, count1 = 0;
        for(int i = 0; i <= IP.size(); ++i){

            if(IP[i] != '.' && IP[i] != '\0'){
                if(IP[i] < '0' || IP[i] > '9') return false;
                temp += IP[i];
                ++count1;
                if(count1 > 4) return false;
            }else{
                if(temp != "" && stoi(temp) < 256 && stoi(temp) >= 0){
                    if(temp[0] == '0' && temp.size() > 1) return false;
                    ++count;
                    if(count == 4) return i == IP.size();
                } else
                    return false;
                temp = "";
                count1 = 0;
            }
        }
        return false;
    }

    bool isIPV6(string IP){
        int count = 0, count1 = 0;
        for(int i = 0; i <= IP.size(); ++i){
            if((IP[i] >= '0' && IP[i] <= '9') || (IP[i] >= 'A' && IP[i] <= 'F') || (IP[i] >= 'a' && IP[i] <= 'f')){
                ++count1;
                if(count1 > 4) return false;
            }else if(IP[i] == ':' || IP[i] == '\0'){
                if(count1 == 0) return false;
                ++count;
                count1 = 0;
                if(count == 8) return i == IP.size();
            }else{
                return false;
            }
        }

        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}