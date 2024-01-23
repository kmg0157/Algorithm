#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool is_odd(int n)
{
    if(n%2==1)
        return true;
    else
        return false;
}

int solution(int a, int b) {
    int answer = 0;
    
    if(is_odd(a)==true&&is_odd(b)==true)
    {
        answer=pow(a,2)+pow(b,2);
    }
    else if(is_odd(a)!=is_odd(b))
    {
        answer=2*(a+b);
    }
    else
        answer=abs(a-b);
    
    return answer;
}