#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n, 0)); 
    
    int num = 1;

    int rowStart = 0, rowEnd = n - 1; 
    int colStart = 0, colEnd = n - 1; 

    while (rowStart <= rowEnd && colStart <= colEnd) {
        
        for (int j = colStart; j <= colEnd; j++) {
            answer[rowStart][j] = num++;
        }
        rowStart++;

        for (int i = rowStart; i <= rowEnd; i++) {
            answer[i][colEnd] = num++;
        }
        colEnd--;

        for (int j = colEnd; j >= colStart; j--) {
            answer[rowEnd][j] = num++;
        }
        rowEnd--;

        for (int i = rowEnd; i >= rowStart; i--) {
            answer[i][colStart] = num++;
        }
        colStart++;
    }

    return answer;
}
