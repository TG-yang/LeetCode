#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <iterator>
#include <utility>
using namespace std;

class LRUCache {
private:
    int LRUcapacity;
    int count = 0;
    queue<pair<int,int>>myStore;
public:
    LRUCache(int capacity) {
        LRUcapacity = capacity;
    }

    int get(int key) {
        pair<int,int>result;
        bool isFind = false;
        int n = myStore.size();
        for(int i = 0; i < n; ++i){
            pair<int,int>onePair = myStore.front();
            myStore.pop();

            if(onePair.first == key) {
                result = onePair;
                isFind = true;
            }
            if(onePair.first != key){
                myStore.push(onePair);
            }
        }

        if(isFind) {
            myStore.push(result);
            return result.second;
        } else
            return -1;
    }

    void put(int key, int value) {

        if(get(key) != -1){
            myStore.back().second = value;
        }else{
            if(myStore.size() >= LRUcapacity){
                myStore.pop();
                --count;
            }
            ++count;
            pair<int,int>onePair(key,value);
            myStore.push(onePair);
        }
    }
};

int main() {

    LRUCache*cache = new LRUCache(2);

//    cache->put(1, 1);
//    cache->put(2, 2);
//    cache->get(1);       // returns 1
//    cache->put(3, 3);    // evicts key 2
//    cache->get(2);       // returns -1 (not found)
//    cache->put(4, 4);    // evicts key 1
//    cache->get(1);       // returns -1 (not found)
//    cache->get(3);       // returns 3
//    cache->get(4);       // returns 4
    cache->get(2);
    cache->put(2, 6);
    cache->get(1);       // returns 1
    cache->put(1, 5);    // evicts key 2// returns -1 (not found)
    cache->put(1, 2);
    cache->get(1);// evicts key 1
    cache->get(2);       // returns -1 (not found)
    std::cout << "Hello, World!" << std::endl;
    return 0;
}