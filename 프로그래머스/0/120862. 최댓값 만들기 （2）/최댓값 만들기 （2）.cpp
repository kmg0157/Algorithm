#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    
    int n = numbers.size();
    
    // 가장 큰 두 양수끼리 곱하기
    int positiveMax = numbers[0] * numbers[1];
    
    // 가장 작은 두 음수끼리 곱하기
    int negativeMax = numbers[n - 1] * numbers[n - 2];
    
    // 양수끼리 또는 음수끼리 곱했을 때 더 큰 값을 선택
    return max(positiveMax, negativeMax);
}