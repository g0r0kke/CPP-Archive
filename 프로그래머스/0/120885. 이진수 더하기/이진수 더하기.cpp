#include <string>
using namespace std;

string solution(string bin1, string bin2) {
    // 이진수를 10진수로 변환
    int num1 = 0;
    int num2 = 0;
    
    // bin1을 10진수로
    for(char c : bin1) {
        num1 = num1 * 2 + (c - '0');
    }
    
    // bin2를 10진수로
    for(char c : bin2) {
        num2 = num2 * 2 + (c - '0');
    }
    
    // 더하기
    int sum = num1 + num2;
    
    // 결과가 0이면 바로 "0" 반환
    if(sum == 0) return "0";
    
    // 10진수를 다시 이진수 문자열로
    string answer = "";
    while(sum > 0) {
        answer = to_string(sum % 2) + answer;
        sum /= 2;
    }
    
    return answer;
}