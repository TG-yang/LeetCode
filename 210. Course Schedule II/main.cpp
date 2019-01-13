#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

//class Solution {
//public:
//    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
//
//        vector<int>result;
//
//        for(int i = 0; i < prerequisites.size(); ++i){
//
//            vector<int>::iterator it = find(result.begin(),result.end(),prerequisites[i].first);
//            vector<int>::iterator it2 = find(result.begin(),result.end(),prerequisites[i].second);
//
//            if(it == result.end() && it2 == result.end()){
//                result.push_back(prerequisites[i].second);
//                result.push_back(prerequisites[i].first);
//
//            }else if(it2 == result.end()){
//                int temp = result[*it];
//                result[*it] = prerequisites[i].second;
//                result.push_back(temp);
//            }else if(it == result.end()){
//                result.push_back(prerequisites[i].first);
//            }
//        }
//
//        return result;
//    }
//};

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<int> result;
        vector<unordered_set<int>> graph(numCourses, unordered_set<int>());
        vector<int> inDegree(numCourses, 0);
        for(auto val: prerequisites)
        {
            if(graph[val.second].count(val.first) == 0)//如果当前先修课还没有被计算
            {
                graph[val.second].insert(val.first);//则将此课加入到先修课结点维护的集合中，代表此先修课完成之后才可以学的课
                inDegree[val.first]++;//此课程的入度＋１，代表有多少先修课
            }
        }
        int j;
        for(int i = 0; i < numCourses; i++)
        {
            for(j = 0; j < numCourses; j++)//寻找入度为０的结点，找到就break循环
                if(inDegree[j] == 0) break;
            if(j == numCourses) return vector<int>();//如果最终没有找到，说明有环
            result.push_back(j);
            inDegree[j]--;//将这个入度为０的结点删去
            for(auto val: graph[j])//将入度为０的结点指向的结点入度都－１
                inDegree[val]--;
        }
        return result;
    }
};





    int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}