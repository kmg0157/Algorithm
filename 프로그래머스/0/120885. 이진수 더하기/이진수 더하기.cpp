#include <string>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

int binTodeci(string a)
{
    int retval = 0;

    reverse(a.begin(), a.end());

    for(int i = a.length() - 1; i >= 0; --i)
    {
        if(a[i] == '1') retval += pow(2, i); 
    }

    return retval;
}

string solution(string bin1, string bin2) {

    string answer = "";
    int sum = binTodeci(bin1) + binTodeci(bin2);

    if(sum == 0) return "0";

    while(sum > 0)
    {
        answer += to_string(sum % 2);
        sum /= 2;
    }

    reverse(answer.begin(), answer.end());
    return answer;
}
