#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    unordered_map<int, int> count;
    
    for (int i = 0; i < lines.size(); ++i)
    {
        for (int j = lines[i][0]; j < lines[i][1]; ++j)
        {
            ++count[j];
        }
    }
    
    for (const auto& c : count)
    {
        if (c.second >= 2)
        {
            ++answer;
        }
    }
    
    return answer;
}