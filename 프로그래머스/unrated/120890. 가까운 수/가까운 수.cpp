#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int min_diff = abs(array[0] - n);  
    int closest_number = array[0];     

    for (int i = 1; i < array.size(); i++) {
        int current_diff = abs(array[i] - n);

        if (current_diff < min_diff || (current_diff == min_diff && array[i] < closest_number)) {
            min_diff = current_diff;
            closest_number = array[i];
        }
    }

    answer = closest_number;

    return answer;
}
