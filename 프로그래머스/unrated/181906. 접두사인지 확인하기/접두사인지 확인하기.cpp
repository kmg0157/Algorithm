#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    
    for(int i=1;i<my_string.length();i++)
    {
        string prefix=my_string.substr(0,i);
        if(prefix==is_prefix)
        {
            answer=1;
            break;
        }else answer=0;
    }
    
    return answer;
}