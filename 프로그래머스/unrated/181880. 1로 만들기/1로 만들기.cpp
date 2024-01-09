#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    for(auto num:num_list)
    {
        while(num!=1)
        {
            if(num%2==1)
            {
                num=(num-1)/2;
                answer++;
            }
            else
            {
                num/=2;
                answer++;
            }
        }
    }
    
    return answer;
}