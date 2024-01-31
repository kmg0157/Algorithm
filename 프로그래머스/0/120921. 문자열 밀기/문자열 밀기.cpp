#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = -1;
    
    for(int i=0;i<A.length();i++)
    {
        if(A==B) 
        {
            answer=i;
            break;
        }
        else
        {
            char last=A.back();
            A.pop_back();
            A=last+A;
        }
    }
    
    return answer;
}