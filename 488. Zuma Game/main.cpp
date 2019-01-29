#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int findMinStep(string board, string hand) {
        vector<int>vecHand(26,0);
        for(int i = 0; i < hand.size(); ++i)
            vecHand[hand[i] - 'A']++;

        int res = helper(board + "#", vecHand, hand.size() + 1);

        return res == hand.size() + 1 ? -1 : res;
    }

private:
    int helper(string board, vector<int>hand, int Max){
        board = process(board);
        if(board == "#") return 0;
        int need = 0, count = Max;

        for(int i = 0, j = 0; i < board.size(); ++i){

            if(board[i] == board[j]) continue;
            need = 3 - (i - j);
            if(hand[board[j] - 'A'] >= need){
                hand[board[j] - 'A'] -= need;
                count = min(count, need + helper(board.substr(0,j) + board.substr(i), hand, Max));
                hand[board[j] - 'A'] += need;
            }
            j = i;
        }
        return count;
    }

    string process(string board){
        int len = board.size();
        for(int i = 0, j = 0; i < len; ++i){
            if(board[i] == board[j]) continue;
            if(i - j >= 3){
                return process(board.substr(0,j) + board.substr(i));
            }else
                j = i;
        }
        return board;
    }
};




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}