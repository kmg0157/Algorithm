#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";
    
    for(auto info:db)
    {
        if(info[0]==id_pw[0])
        {
            if(info[1]==id_pw[1])
            {
                answer="login";
                break;
            }
            else answer="wrong pw";
        }
    }
    
    return answer;
}