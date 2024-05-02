#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> a={1,2,3,4,5};
    vector<int> b={2,1,2,3,2,4,2,5};
    vector<int> c={3,3,1,1,2,2,4,4,5,5};
    
    int a_count=0,b_count=0,c_count=0;
    for(int i=0;i<answers.size();i++)
    {
        if(answers[i]==a[i%a.size()]) a_count++;
        if(answers[i]==b[i%b.size()]) b_count++;
        if(answers[i]==c[i%c.size()]) c_count++;
    }
    
    int max_count = max({a_count, b_count, c_count});
    if (max_count == a_count) answer.push_back(1);
    if (max_count == b_count) answer.push_back(2);
    if (max_count == c_count) answer.push_back(3);
    
    return answer;
}