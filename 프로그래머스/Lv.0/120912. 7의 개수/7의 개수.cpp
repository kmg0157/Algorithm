#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for(auto v:array)
    {
        string a=to_string(v);
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='7')
                answer++;
        }
    }
    
    return answer;
}