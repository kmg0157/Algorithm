#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    int pos = n_str.find_first_not_of('0');
    string answer = (pos != string::npos) ? n_str.substr(pos) : "0";
    return answer;
}