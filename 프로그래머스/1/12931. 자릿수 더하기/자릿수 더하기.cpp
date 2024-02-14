#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string a=to_string(n);
    
    for(char c:a)
    {
        answer+=c-'0';
    }
    
    return answer;
}