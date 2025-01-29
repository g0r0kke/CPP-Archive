#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    
    // 3 -> x + (x+1) + (x+2) = 3x+3(0~2의 합)
    // 5 -> x + (x+1) + (x+2) + (x+3) + (x+4) = 5x + 10(0~4의 합)
    
    // num * x + (num-1)*num/2 = total
    // x = (total - (num-1)*num/2) / num
    
    int x = 0;
    x = (total - (num-1)*num/2) / num;
    
    for (int i = 0; i < num; ++i)
    {
        int j = x++;
        answer.push_back(j);
    }
    
    return answer;
}