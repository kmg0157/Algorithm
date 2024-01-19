#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int check_board[1001][1001]; // 외각은 사용하지 않을 것
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (board[i][j] == 1)
            {
                check_board[i-1+1][j-1+1] = 1; // 외각을 사용하지 않기 때문에 각 인덱스 값의 +1 위치 사용
                check_board[i-1+1][j+1] = 1;
                check_board[i-1+1][j+1+1] = 1;
                check_board[i+1][j-1+1] = 1;
                check_board[i+1][j+1] = 1;
                check_board[i+1][j+1+1] = 1;
                check_board[i+1+1][j-1+1] = 1;
                check_board[i+1+1][j+1] = 1;
                check_board[i+1+1][j+1+1] = 1;
            }
            cout << board[i][j] << " ";
        }
        cout << endl;

    }
    cout << endl;
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (check_board[i + 1][j + 1] != 1)
                answer++;
            cout << check_board[i + 1][j + 1] << " ";
        }
        cout << endl;
    }
    return answer;
}