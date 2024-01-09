#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for (char& c : myString) {
        c = tolower(c);
    }
    
    for (char& c : pat) {
        c = tolower(c);
    }
    
    if (myString.find(pat) != string::npos) {
        answer=1;
    } else {
        answer=0;
    }
    
    return answer;
}