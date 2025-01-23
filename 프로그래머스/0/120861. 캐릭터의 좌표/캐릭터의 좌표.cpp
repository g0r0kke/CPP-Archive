#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2, 0); // 크기 2의 벡터에 0으로 초기화
    vector<int> temp(2, 0);
    
    for (const string& s : keyinput)
    {
        if (s == "left")
        {
            temp[0] -= 1;
            if ( temp[0] >= -board[0]/2 ) answer[0] -= 1;
            else temp[0] = answer[0];
        }
        else if (s == "right")
        {
            temp[0] += 1;
            if ( temp[0] <= board[0]/2 ) answer[0] += 1;
            else temp[0] = answer[0];
        }
        else if (s == "up")
        {
            temp[1] += 1;
            if ( temp[1] <= board[1]/2 ) answer[1] += 1;
            else temp[1] = answer[1];
        }
        else if (s == "down")
        {
            temp[1] -= 1;
            if ( temp[1] >= -board[1]/2 ) answer[1] -= 1;
            else temp[1] = answer[1];
        }
    }
    
    return answer;
}