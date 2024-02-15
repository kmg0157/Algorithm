#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    
    vector<string> days = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    vector<int> months = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

    int totalDays = 0;
    
    for (int i = 0; i < a - 1; i++) {
        totalDays += months[i];
    }
    totalDays += b - 1;
    answer = days[totalDays % 7];

    return answer;
}