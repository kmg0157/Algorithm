#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    sort(sides.begin(),sides.end());
    int max=sides[1];
    int min=sides[0];
    
    for(int i=0;i<=max;i++)
    {
        if(i+min>max) answer++;
    }
    for(int i=max+1;i<min+max;i++)
    {
        if(i<min+max) answer++;
    }
    
    return answer;
}