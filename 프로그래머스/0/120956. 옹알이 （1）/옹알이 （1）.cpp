#include <string>
#include <vector>
using namespace std;
int solution(vector<string> babbling) {
    int answer = 0;
    string s1 = "aya";
    string s2 = "ye";
    string s3 = "woo";
    string s4 = "ma";
    
    for (string& s : babbling)
    {
        // 각 단어에 대해 찾을 수 있는 만큼 계속 찾아서 replace
        size_t pos;
        while ((pos = s.find(s1)) != string::npos)
            s.replace(pos, s1.length(), "   ");
        while ((pos = s.find(s2)) != string::npos)
            s.replace(pos, s2.length(), "  ");
        while ((pos = s.find(s3)) != string::npos)
            s.replace(pos, s3.length(), "   ");
        while ((pos = s.find(s4)) != string::npos)
            s.replace(pos, s4.length(), "  ");
        
        bool allSpaces = true;
        for (const char& c : s)
        {
            if (!isspace(c))
            {
                allSpaces = false;
                break;
            }
        }
        if (allSpaces) ++answer;
    }
    
    return answer;
}