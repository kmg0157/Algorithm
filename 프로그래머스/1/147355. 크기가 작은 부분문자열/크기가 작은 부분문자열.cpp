#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    unsigned long long tp=stoll(p);
    
    for(int i=0;i<=t.length()-p.length();i++)
    {
        string tmp=t.substr(i,p.length());
        if(stoll(tmp)<=tp) answer++;
    }
    
    return answer;
}