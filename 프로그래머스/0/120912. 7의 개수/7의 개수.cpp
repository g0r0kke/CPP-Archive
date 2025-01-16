#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for (const int& i : array)
    {
        string s = to_string(i);
        for (const char& c : s)
            if (c == '7') answer += 1;
    }
    
    return answer;
}