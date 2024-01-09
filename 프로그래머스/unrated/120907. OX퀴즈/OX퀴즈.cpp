#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;

    for (const string& equation : quiz) {
        int x, y, z;
        char op;
        sscanf(equation.c_str(), "%d %c %d = %d", &x, &op, &y, &z);

        int result;
        if (op == '+') {
            result = x + y;
        } else if (op == '-') {
            result = x - y;
        }

        answer.push_back((result == z) ? "O" : "X");
    }

    return answer;
}