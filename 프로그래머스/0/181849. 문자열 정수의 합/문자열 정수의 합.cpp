#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer = 0;
    for(auto s:num_str)
    {
        int a=s-'0';
        answer+=a;
    }
    return answer;
}