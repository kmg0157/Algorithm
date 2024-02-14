#include <string>
#include <vector>

using namespace std;

bool yak(int n)
{
    int count=0;
    bool result=true;
    
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count%2==0) result=false;
    
    return result;
}

int solution(int left, int right) {
    int answer = 0;
    
    for(int i=left;i<=right;i++)
    {
        if(yak(i)==true)
        {
            answer+=i;
        }
        else
            answer-=i;
    }
    
    return answer;
}