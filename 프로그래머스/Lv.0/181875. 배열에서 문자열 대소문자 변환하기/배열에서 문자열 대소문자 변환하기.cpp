#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;

    for (int i = 0; i < strArr.size(); i++) {
        if (i % 2 == 0) {
            string a;
            for (char c : strArr[i]) {
                a += tolower(c);
            }
            answer.push_back(a);
        } else if (i % 2 == 1) {
            string a;
            for (char c : strArr[i]) {
                a += toupper(c);
            }
            answer.push_back(a);
        }
    }

    return answer;
}
