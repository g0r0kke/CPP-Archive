#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) {
    int answer = 0;
    answer += min(M, N) - 1;
    answer += min(M, N) * (max(M, N)-1);
    return answer;
}