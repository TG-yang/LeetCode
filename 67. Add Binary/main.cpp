#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        while(a == "0" || a.empty())
            return b;
        while(b == "0" || b.empty())
            return a;
        int lena = a.size() - 1;
        int lenb = b.size() - 1;
        int aa,bb,carry,rem;
        string result;
        aa = bb = carry = rem = 0;

        while(lena >= 0 || lenb >= 0){
            aa = lena < 0 ? 0 : a[lena] - '0';
            bb = lenb < 0 ? 0 : b[lenb] - '0';
            rem = (aa + bb + carry) % 2;
            carry = (aa + bb + carry) / 2;
            result.push_back(rem + '0');
            --lena;
            --lenb;
        }
        if(carry == 1)
            result.push_back(carry + '0');
        reverse(result.begin(),result.end());
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}