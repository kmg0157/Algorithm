#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    string k_str = to_string(k);

    for (int a = i; a <= j; a++) {
        string tmp = to_string(a);
        size_t pos = 0;

        while ((pos = tmp.find(k_str, pos)) != string::npos) {
            pos += k_str.length();
            answer++;
        }
    }

    return answer;
}