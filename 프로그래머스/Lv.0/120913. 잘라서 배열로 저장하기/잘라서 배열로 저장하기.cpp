#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
     for (int i = 0; i < my_str.length(); i += n) 
     {
        string sub = my_str.substr(i, n);
        answer.push_back(sub);
     }
    
    return answer;
}