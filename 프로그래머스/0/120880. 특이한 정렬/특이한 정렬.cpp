#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

bool compare(pair<int,int>a,pair<int,int>b)
{
        if (a.first == b.first) 
        {
            return a.second > b.second;
        }
        return a.first < b.first;
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;

    vector<pair<int, int>> tmp;

    for (int i = 0; i < numlist.size(); ++i) {
        int distance = abs(numlist[i] - n);
        tmp.push_back({distance, numlist[i]});
    }

    sort(tmp.begin(), tmp.end(), compare);

    for (auto result : tmp) {
        answer.push_back(result.second);
    }

    return answer;
}
