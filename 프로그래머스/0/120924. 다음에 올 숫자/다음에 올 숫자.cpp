#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    vector<double> v(common.begin(), common.end());
    
    if (v[v.size()-1] == v[0]*pow((v[1]/v[0]), (v.size()-1)))
    {
        answer = v[0] * pow((v[1]/v[0]), (v.size()));
    }
    else answer = v[0] + (v.size()) * (v[1]-v[0]);
    // 등차수열인지 확인
    // a_n = a + (n-1)d
    
    // 등비수열인지 확인
    // a_n = a*r^(n-1)
    
    return answer;
}