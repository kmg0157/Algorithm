#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    
    unordered_map<int,int> count;
    
    for(string s:strArr)
    {
        count[s.length()]++;
    }
    
    for(auto a:count)
    {
        answer=max(answer,a.second);
    }
    
    return answer;
}