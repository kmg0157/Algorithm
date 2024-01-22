#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    int size=arr.size();
    
    if(size%2==1)
    {
        for(int i=0;i<size;i+=2)
        {
            arr[i]+=n;
        }
    }
    else
    {
        for(int i=1;i<size;i+=2)
        {
            arr[i]+=n;
        }
    }
    answer=arr;
    
    return answer;
}