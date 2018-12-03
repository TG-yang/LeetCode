#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

class Solution {
    vector<string> result;
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>wordD(wordDict.begin(),wordDict.end());
        vector<bool> result_bool(s.size(),false);
        vector<vector<int>>result_node(s.size());
        vector<string>final_path;

        if(wordD.empty()) return final_path;
        if(wordD.find(s) != wordD.end()){
            final_path.push_back(s);
            return final_path;
        }

        for(int i = 0; i < result_bool.size(); ++i) {
            if (wordD.find(s.substr(0, i + 1)) != wordD.end()) {
                result_bool[i] = true;
                result_node[i].push_back(-1);
            }
            for (int j = 0; j < i; ++j) {
                if ((result_bool[j] == true) && (wordD.find(s.substr(j + 1, i - j)) != wordD.end())) {
                    result_bool[i] = true;
                    result_node[i].push_back(j);
                }
            }
        }

        vector<vector<int>>paths;
        if(!result_bool[s.size() - 1])
            return final_path;

        vector<int>path;

        dfs(result_node, result_node.size() - 1, path, paths);
        format_result(s, paths, final_path );
        return final_path;

    }

private:
    void dfs(vector<vector<int>> & result_node, int start, vector<int>& path, vector<vector<int>> & paths){
        if(start == -1){

            paths.push_back(path);
            paths.back().pop_back();
            reverse(paths.back().begin(),paths.back().end());
        }else{
            for(int i = 0; i < result_node[start].size(); ++i){
                path.push_back(result_node[start][i]);
                dfs(result_node,result_node[start][i],path,paths);
                path.pop_back();
            }
        }
    }

    void format_result(string& s, vector<vector<int>> & paths, vector<string> & final_paths){
        for(int i = 0; i < paths.size(); ++i){
            paths[i].push_back(s.size() - 1);
            string tmp = s.substr(0,paths[i][0] + 1);

            for(int j = 1; j < paths[i].size(); ++j){
                tmp += " ";
                tmp += s.substr(paths[i][j - 1] + 1, paths[i][j] - paths[i][j - 1]);
            }
            final_paths.push_back(tmp);
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}