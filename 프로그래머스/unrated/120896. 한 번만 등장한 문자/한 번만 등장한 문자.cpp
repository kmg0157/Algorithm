#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    unordered_map<char,int> count;
    
    for(int i=0;i<s.length();i++)
    {
        count[s[i]]++;
    }
    for(auto c:count)
    {
        if(c.second==1)
            answer+=c.first;
    }
    
    sort(answer.begin(),answer.end());
    return answer;
}