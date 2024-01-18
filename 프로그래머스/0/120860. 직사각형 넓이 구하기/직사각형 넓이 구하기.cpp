#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    vector<int> x;
    vector<int> y;
    
    for(auto dot:dots)
    {
        x.push_back(dot[0]);
        y.push_back(dot[1]);
    }
    
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    
    int width=(x[3]>x[0])?x[3]-x[0]:x[0]-x[3];
    int height=(y[3]>y[0])?y[3]-y[0]:y[0]-y[3];
    
    answer=width*height;
    
    return answer;
}