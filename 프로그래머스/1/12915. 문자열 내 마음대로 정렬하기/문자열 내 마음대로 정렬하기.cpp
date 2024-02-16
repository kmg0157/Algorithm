#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b, int n)
{
    if(a[n]==b[n])
        return a<b;
    else 
        return a[n]<b[n];
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    sort(strings.begin(),strings.end(),[&](string a, string b) {
        return compare(a, b, n);
    });
    answer=strings;
    return answer;
}