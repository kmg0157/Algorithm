#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;

    // 가장 작은 수 제거
    answer.erase(min_element(answer.begin(), answer.end()));

    // 배열이 비어있는 경우
    if (answer.empty()) {
        answer.push_back(-1);
    }

    return answer;
}
