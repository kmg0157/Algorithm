#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> index;
    vector<int> answer;
    
    int count=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==2)
        {
            index.push_back(i);
            count++;
        }
            
    }
    
    if(count==0)
        answer.push_back(-1);
    else if(count==1)
        answer.push_back(arr[index[0]]);
    else
    {
        for(int i=index[0];i<=index.back();i++)
        {
            answer.push_back(arr[i]);   
        }
    }
    return answer;
}