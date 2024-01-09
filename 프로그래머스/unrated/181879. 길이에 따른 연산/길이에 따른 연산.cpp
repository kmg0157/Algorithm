#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int mul=1;
    int size=num_list.size();
    
    if(size>10)
    {
        for(auto num:num_list)
            answer+=num; return answer;
    }
    else if(size<=10)
    {
        for(auto num:num_list)
            mul*=num; return mul;
    }
    
}