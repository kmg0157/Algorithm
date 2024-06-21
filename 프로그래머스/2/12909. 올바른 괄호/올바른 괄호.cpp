#include <string>
#include <iostream>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector<int> left;
    
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(') 
        {
            left.push_back(1);
        }
        else if(s[i] == ')') 
        {
            if(left.empty()) 
            {
                answer = false;
                break;
            }
            else 
            {
                left.pop_back();
            }
        }
    }

    if(!left.empty()) 
    {
        answer = false;
    }

    return answer;
}

