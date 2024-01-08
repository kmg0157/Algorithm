#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());

    for (int i = 0; i < phone_book.size() - 1; i++) {
        // 현재 번호가 다음 번호의 접두어인지 확인
        if (phone_book[i + 1].find(phone_book[i]) == 0) {
            return false;
        }
    }

    return true;
}