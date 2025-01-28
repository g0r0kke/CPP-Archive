#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    if (A == B) return 0;  // 처음부터 같다면 밀 필요가 없음
    
    int answer = 0;
    string temp = A;  // 원본 문자열 보존
    
    for (int i = 0; i < A.size(); ++i) {
        // 오른쪽으로 한 칸씩 밀기
        char c = temp[temp.size()-1];  // 마지막 문자
        temp = c + temp.substr(0, temp.size()-1);  // 마지막 문자를 맨 앞으로
        answer++;
        
        if (temp == B) return answer;
    }
    
    return -1;  // A를 몇 번을 밀어도 B가 될 수 없는 경우
}