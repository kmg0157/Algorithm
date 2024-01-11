#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(char c: myString)
    {
        char a;
        a=toupper(c);
        answer+=a;
    }
    
    return answer;
}