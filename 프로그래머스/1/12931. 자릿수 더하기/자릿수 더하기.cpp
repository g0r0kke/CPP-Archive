#include <iostream>
#include <string>
#include <vector>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string s = "";
    vector<int> v;
    
    s = to_string(n);
    
    for (const char& c : s)
    {
        string temp = "";
        temp+=c;
        v.push_back(stoi(temp));
    }
    
    for (const int& i : v)
    {
        answer+=i;
    }

    return answer;
}