#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int last=common.size()-1;
    
    for(int i=0;i<common.size();i++)
    {
        if(common[1]-common[0]==common[2]-common[1])
        {
            answer=common[last]+(common[1]-common[0]);
        }
        else
            answer=common[last]*(common[1]/common[0]);
    }
    
    return answer;
}