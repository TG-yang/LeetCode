#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
private:
    string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    unordered_map<char, string> map;
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        char key = charset[rand() % charset.size()];
        string encoded = "http://tinyurl.com/";
        encoded += key;
        map[key] = longUrl;
        return encoded;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        char key = shortUrl[shortUrl.size() - 1];
        return map[key];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}