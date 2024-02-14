#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int solution(int num) {
    int answer = 0;
    long long n = num; // int 범위를 초과할 수 있으므로 long long으로 선언

    while (n != 1) {
        if (answer >= 500) {
            answer = -1;
            break;
        }

        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        answer++;
    }
    return answer;
}