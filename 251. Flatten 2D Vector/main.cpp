#include <iostream>
#include <vector>

using namespace std;

class Vector2D {
public:
    Vector2D(vector<vector<int>>& vec2d) {
        if(vec2d.size() == 0) return;
        it1 = vec2d.begin();
        itEnd = vec2d.end();
        it2 = (*it1).begin();
    }

    int next() {
        return *it2++;
    }

    bool hasNext() {
        while(it1 != itEnd && it2 == (*it1).end())
        {
            it1++;
            it2 = (*it1).begin();
        }
        return it1 != itEnd;
    }
private:
    vector<vector<int>>::iterator it1, itEnd;
    vector<int>::iterator it2;
};

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D i(vec2d);
 * while (i.hasNext()) cout << i.next();
 */



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}