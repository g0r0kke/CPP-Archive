#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    for (int i = 0; i < sides[0]+sides[1]; i++)
    {
        if (sides[0] >= i + sides[1]) continue;
        else if (sides[1] >= i + sides[0]) continue;
        else answer++;
    }
    
    return answer;
}