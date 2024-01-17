#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
       int x = 0, y = 0;

    int max_X = board[0] / 2;
    int max_Y = board[1] / 2;

    for (auto v : keyinput) {
        if (v == "up") {
            y += 1;
            if(y>max_Y) y=max_Y;
        } else if (v == "down") {
            y -= 1;
            if(y<-max_Y) y=-max_Y;
        } else if (v == "right") {
            x += 1;
            if(x>max_X) x=max_X;
        } else if (v == "left") {
            x -= 1;
            if(x<-max_X) x=-max_X;
        }
    }

    x = max(-max_X, min(max_X, x));
    y = max(-max_Y, min(max_Y, y));

    answer.push_back(x);
    answer.push_back(y);

    return answer;
}