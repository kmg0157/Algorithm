#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    string num=to_string(n);
    
    for(auto s:num)
        answer+=s-'0';
    
    return answer;
}