#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>  // sort 함수를 사용하기 위해 필요
using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    vector<pair<int, int>> dist(numlist.size());
    
    // 각 숫자와 n과의 거리를 저장
    for (int i = 0; i < numlist.size(); ++i) {
        dist[i].first = numlist[i];
        dist[i].second = abs(n - numlist[i]);  // n과의 거리 계산
    }
    
    // 정렬
    sort(dist.begin(), dist.end(), 
        [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.second == b.second) {  // 거리가 같으면
                return a.first > b.first; // 숫자가 큰 것이 앞으로
            }
            return a.second < b.second;   // 거리가 작은 것이 앞으로
        });
    
    // 정렬된 순서대로 숫자만 answer에 저장
    for (const auto& p : dist) {
        answer.push_back(p.first);
    }
    
    return answer;
}