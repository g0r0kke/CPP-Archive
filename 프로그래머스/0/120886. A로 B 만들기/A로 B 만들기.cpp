#include <string>
#include <set>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    
    multiset<char> ms1(before.begin(), before.end());
    multiset<char> ms2(after.begin(), after.end());
    
    if (ms1==ms2) answer = 1;
    else answer = 0;
    
    return answer;
}