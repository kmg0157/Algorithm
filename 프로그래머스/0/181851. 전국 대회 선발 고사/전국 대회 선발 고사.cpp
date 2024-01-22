#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    
    vector<pair<int,int>> count;
    for(int i=0;i<rank.size();i++)
    {
        if(attendance[i]==true)
            count.push_back({rank[i],i});
    }
    sort(count.begin(),count.end());
    answer=10000 * count[0].second + 100 * count[1].second + count[2].second;
    
    
    return answer;
}