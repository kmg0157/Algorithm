#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;

    int rows = board.size();
    int cols = board[0].size();

    if (w - 1 >= 0 && board[h][w] == board[h][w - 1]) {
        answer++;
    }

    if (w + 1 < cols && board[h][w] == board[h][w + 1]) {
        answer++;
    }

    if (h - 1 >= 0 && board[h][w] == board[h - 1][w]) {
        answer++;
    }

    if (h + 1 < rows && board[h][w] == board[h + 1][w]) {
        answer++;
    }

    return answer;
}
