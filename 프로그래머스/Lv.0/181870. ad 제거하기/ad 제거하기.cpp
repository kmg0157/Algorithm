#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for(int i=0;i<strArr.size();i++)
    {
        size_t pos=strArr[i].find("ad");
        if(pos==string::npos)
            answer.push_back(strArr[i]);
    }
    
    return answer;
}