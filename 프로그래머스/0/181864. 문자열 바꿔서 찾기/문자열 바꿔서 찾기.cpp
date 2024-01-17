#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string tmp="";
    
    for(char c:myString)
    {
        if(c=='A')
            tmp+='B';
        else if(c=='B')
            tmp+='A';
    }
    
    if(tmp.find(pat)!=string::npos)
        answer=1;
    else
        answer=0;
    
    return answer;
}