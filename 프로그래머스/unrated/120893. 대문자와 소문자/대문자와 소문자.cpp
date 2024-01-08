#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(char c:my_string)
    {
        if(islower(c)) answer+=toupper(c);
        else if(isupper(c)) answer+=tolower(c);
    }
    
    return answer;
}