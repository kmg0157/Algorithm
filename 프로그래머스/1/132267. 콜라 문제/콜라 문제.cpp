#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int tmp = n;

    while (tmp >= a) {
        answer += tmp / a * b;
        tmp = tmp / a * b + tmp % a;
    }

    return answer;
}