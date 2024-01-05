#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    
    for(int i=0;i<code.length();i++)
    {
        int a=i%q;
        if(a==r)
            answer+=code[i];
    }
    
    return answer;
}