#include <string>
#include <vector>
#include <math.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int size = arr.size();
    int next_power_of_two = 1;
    while (next_power_of_two < size) {
        next_power_of_two *= 2;
    }

    int zeros_to_add = next_power_of_two - size;

    for (int i = 0; i < zeros_to_add; ++i) {
        arr.push_back(0);
    }

    answer=arr;
    return answer;
}
