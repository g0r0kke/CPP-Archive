#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    // 1의 상하좌우, 대각선 1칸씩을 다 1로 만들자!
    // 그렇게 하면 검사할 게 늘어나니까 2로 만들자!
    
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (board[i][j] == 1)
            {
                if (j>=1 && board[i][j-1] != 1) board[i][j-1] = 2;
                if (j < board[0].size()-1 && board[i][j+1] != 1) board[i][j+1] = 2;
                if (i>=1 && board[i-1][j] != 1) board[i-1][j] = 2;
                if (i < board.size()-1 && board[i+1][j] != 1) board[i+1][j] = 2;
                if (i>=1 && j < board[0].size()-1 && board[i-1][j+1] != 1) board[i-1][j+1] = 2;
                if (i < board.size()-1 && j < board[0].size()-1 && board[i+1][j+1] != 1) board[i+1][j+1] = 2;
                if (i>=1 && j>=1 && board[i-1][j-1] != 1) board[i-1][j-1] = 2;
                if (i < board.size()-1 && j>=1 && board[i+1][j-1] != 1) board[i+1][j-1] = 2;
            }
        }
    }
    
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (board[i][j] == 0) answer++;
        }
    }
    
    return answer;
}