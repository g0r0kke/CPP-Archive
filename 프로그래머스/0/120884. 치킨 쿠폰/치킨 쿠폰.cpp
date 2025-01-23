#include <string>
#include <vector>

using namespace std;

/*
1마리 -> 쿠폰 1장
쿠폰 10장 -> 치킨 1마리 서비스
서비스 치킨 1마리 -> 쿠폰 1장
최대 서비스 치킨 수?
*/

int solution(int chicken) {
    int answer = 0;
    int coupon = 0;
    
    coupon = chicken;
    
    while (coupon >= 10)
    {
        coupon -= 10;
        ++answer;
        ++coupon;
    }
    
    return answer;
}