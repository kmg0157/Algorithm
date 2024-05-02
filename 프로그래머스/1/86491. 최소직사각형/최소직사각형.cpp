#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int w_max,h_max=0;
    vector<int> max;
    vector<int> min;
    
    for(auto s:sizes)
    {
        if(s[0]<s[1])
        {
            max.push_back(s[1]);
            min.push_back(s[0]);
        }
        else{
            max.push_back(s[0]);
            min.push_back(s[1]);
        }
    }
    
    sort(max.begin(),max.end());
    sort(min.begin(),min.end());
    w_max=max.back();
    h_max=min.back();
    return answer=w_max*h_max;
}