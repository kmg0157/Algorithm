#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    unordered_set<int> species(nums.begin(), nums.end());
    answer=min(species.size(), nums.size() / 2);
    return answer;
}