#include <string>
#include <vector>

using namespace std;

    
int solution(int chicken) {
    int answer=-1;
    int coupon=0;
    
    while(chicken>=10)
    {
        coupon=chicken%10;
        chicken/=10;
        answer+=chicken;
        chicken+=coupon;
    }
    
    return answer+1;
}