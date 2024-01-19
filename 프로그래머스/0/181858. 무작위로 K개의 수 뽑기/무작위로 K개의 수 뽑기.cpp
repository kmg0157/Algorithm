#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    unordered_set<int> uniqueNumbers;

    for (int num : arr) {
        if (uniqueNumbers.find(num) == uniqueNumbers.end()) 
        {
            answer.push_back(num);
            uniqueNumbers.insert(num);
        }

        if (answer.size() == k) {
            break;
        }
    }

    while (answer.size() < k) {
        answer.push_back(-1);
    }

    return answer;
}