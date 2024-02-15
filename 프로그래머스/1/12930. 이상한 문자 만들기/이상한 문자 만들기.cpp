#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    int i=0;
    int j=0;
    while(i<s.length())
    {
        if(s[i]==' ') {answer+=' '; j=0;}
        else
        {
            if(j%2==0) 
            {
                answer+=toupper(s[i]);
                j++;
            }
            else 
            {
                answer+=tolower(s[i]);
                j++;
            }
        }
        i++;
    }
    
    
    return answer;
}