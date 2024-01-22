#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    int sum1,sum2=0;
    for(int i=0;i<arr1.size();i++)
    {
        sum1+=arr1[i];
    }
    for(int i=0;i<arr2.size();i++)
    {
        sum2+=arr2[i];
    }
    
    if(arr1.size()>arr2.size()) answer=1;
    else if(arr1.size()<arr2.size()) answer=-1;
    else
    {
        if(sum1==sum2)
        {
            answer=0;        
        }
        else
        {
            answer=sum1>sum2?1:-1;
        }
    }
    
    return answer;
}