#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    
    string num_String=to_string(num);
    string a=to_string(k);
    
    for(int i=0;i<num_String.length();i++)
    {
        if(num_String[i]==a[0]) 
        {
            answer=i+1;
            break;
        }
        else
            answer=-1;
    }
    
    return answer;
}