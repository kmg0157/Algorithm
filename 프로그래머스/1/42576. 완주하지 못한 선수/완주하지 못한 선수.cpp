#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> c_part;
    
    for (int i = 0; i < completion.size(); i++) {
        c_part[completion[i]]++;
    }

    for (int i = 0; i < participant.size(); i++) {
        c_part[participant[i]]--;

        if (c_part[participant[i]] < 0) {
            answer = participant[i];
            break;
        }
    }
    
    return answer;
}