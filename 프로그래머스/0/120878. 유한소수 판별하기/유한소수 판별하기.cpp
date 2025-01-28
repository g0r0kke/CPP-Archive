#include <string>
#include <vector>
using namespace std;

// 최대공약수 구하는 함수
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int solution(int a, int b) {
    // 기약분수 만들기
    int g = gcd(a, b);
    b /= g;  // 분모만 체크하면 됨
    
    // 분모가 2와 5로만 나누어떨어지는지 확인
    while (b % 2 == 0) b /= 2;
    while (b % 5 == 0) b /= 5;
    
    // b가 1이면 유한소수, 아니면 무한소수
    return (b == 1) ? 1 : 2;
}