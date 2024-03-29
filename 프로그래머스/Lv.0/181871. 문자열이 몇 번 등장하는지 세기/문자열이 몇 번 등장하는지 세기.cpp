#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    size_t pos = myString.find(pat);

    while (pos != string::npos) {
        answer++;
        pos = myString.find(pat, pos + 1);
    }

    return answer;
}