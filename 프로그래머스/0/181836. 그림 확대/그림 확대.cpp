#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    
    for(string p:picture)
    {
        string expanded="";
        for(char c:p)
        {
            expanded.append(k,c);
        }
        for(int i=0;i<k;i++)
        {
            answer.push_back(expanded);
        }
    }
    
    return answer;
}