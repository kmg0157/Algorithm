#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p_count = 0;
    int y_count = 0;
    
    for(char c : s)
    {
        if(c == 'p' || c == 'P')
        {
            p_count++;
        }
        else if(c == 'y' || c == 'Y')
        {
            y_count++;
        }
    }
    
    if(p_count != y_count)
        answer = false;
    
    return answer;
}
