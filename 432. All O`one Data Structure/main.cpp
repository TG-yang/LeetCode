#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class AllOne {
private:
    unordered_map<string,int> hash; //int is position in vector
    vector<pair<int,string>> values; //string is keyword and int is values
public:
    /** Initialize your data structure here. */
    AllOne() {

    }

    /** Inserts a new key <Key> with value 1. Or increments an existing key by 1. */
    void inc(string key) {
//        if(hash.count(key)){
//            ++values[hash[key]].first;
//        }else{
//            values.push_back(make_pair(1,key));
//            hash[key] = values.size() - 1;
//        }
        ++hash[key];
    }

    /** Decrements an existing key by 1. If Key's value is 1, remove it from the data structure. */
    void dec(string key) {
//        if(values[hash[key]].first == 1){
//            swap(values[hash[key]],values[values.size() - 1]);
//            int temp = hash[key];
//            hash[key] = values.size() - 1;
//            hash[values[temp].second] = temp;
//            hash.erase(key);
//            values.pop_back();
//        }else if(values[hash[key]].first > 1){
//            --values[hash[key]].first;
//        }
        if(hash.count(key)){
            --hash[key];
            if(hash[key] == 0)
                hash.erase(key);
        }
    }

    /** Returns one of the keys with maximal value. */
    string getMaxKey() {
        int Max = INT_MIN;
        string str = "";
        for(auto item : hash){
            if(Max < item.second){
                str = item.first;
                Max = item.second;
            }
        }
        return str;
    }

    /** Returns one of the keys with Minimal value. */
    string getMinKey() {
        int Min = INT_MAX;
        string str = "";
        for(auto item : hash){
            if(Min > item.second){
                str = item.first;
                Min = item.second;
            }
        }
        return str;
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne obj = new AllOne();
 * obj.inc(key);
 * obj.dec(key);
 * string param_3 = obj.getMaxKey();
 * string param_4 = obj.getMinKey();
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}