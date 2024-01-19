#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    vector<int> daysLeft;
    for (int i = 0; i < progresses.size(); ++i) {
        int days = ceil((100 - progresses[i]) / static_cast<double>(speeds[i]));
        daysLeft.push_back(days);
    }
    
    int day = 0;
    while (day < daysLeft.size()) {
        int count = 0;
        
        while (day < daysLeft.size() && daysLeft[day] <= 0) {
            count++;
            day++;
        }
        
        if (count > 0) {
            answer.push_back(count);
        }
        
        for (int i = day; i < daysLeft.size(); ++i) {
            daysLeft[i] -= 1;
        }
    }
    
    return answer;
}