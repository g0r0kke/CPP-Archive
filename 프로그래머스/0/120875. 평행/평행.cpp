#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    // 0 1 2 3
    // (0, 1), (2, 3)
    // (0, 2), (1, 3)
    // (0, 3), (1, 2)
    
    // 기울기는 y증가량/x증가량
    // 실수 나눗셈 이슈로 분자*분모끼리 곱해서 같은지 확인
    
    // case1: (0, 1), (2, 3)
    if ((dots[0][1]-dots[1][1])*(dots[2][0]-dots[3][0])==(dots[0][0]-dots[1][0])*(dots[2][1]-dots[3][1]))
    {
        return 1;
    }
    
    // case2: (0, 2), (1, 3)
    if((dots[0][1]-dots[2][1])*(dots[1][0]-dots[3][0])==(dots[0][0]-dots[2][0])*(dots[1][1]-dots[3][1]))
    {
        return 1;
    }
    
    // case3: (0, 3), (1, 2)
    if((dots[0][1]-dots[3][1])*(dots[1][0]-dots[2][0])==(dots[0][0]-dots[3][0])*(dots[1][1]-dots[2][1]))
    {
        return 1;
    }
    
    return answer;
}