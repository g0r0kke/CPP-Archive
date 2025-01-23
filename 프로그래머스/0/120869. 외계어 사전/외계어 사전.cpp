#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    
    set<string> s1;
    set<string> s2;
    for (const string& s : spell)
    {
        s1.insert(s);
    }
    
    for (int i = 0; i < dic.size(); i++)
    {
        for (const char& c : dic[i])
        {
            string temp(1, c);
            s2.insert(temp);
        }
        if (s1 == s2) return 1;
        else s2.clear();
    }
    return answer;
}