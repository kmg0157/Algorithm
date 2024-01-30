#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;

    // -2, 1 이면 -2 -1 0 의 자리의 값을 1씩 올리면 쉽게 비교 가능

    int res[201] ={0,}; // 겹치는 부분 카운트 하기 위해
    // 0번인덱스가 -100의 값, 1번이 -99의 값, ... 201번인덱스가 100의 값

    for(vector<int> v : lines)
    {
        for(int i=v[0]; i<v[1]; i++)
        {
            res[i+100]++;
        }
    }

    for(int i : res)
    {        
        if(i>1) answer++;
    }


    return answer;
}