#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<int> solution(vector<vector<int>> score) {
    int n = score.size();
    vector<pair<double, int>> avg(n); // {평균, 원래 인덱스}
    
    // 평균 계산 및 원래 인덱스 저장
    for(int i = 0; i < n; i++) {
        avg[i] = {(score[i][0] + score[i][1]) / 2.0, i};
    }
    
    // 평균 기준 내림차순 정렬
    sort(avg.begin(), avg.end(), greater<pair<double, int>>());
    
    vector<int> answer(n);
    
    // 등수 매기기
    for(int i = 0; i < n; i++) {
        if(i > 0 && avg[i].first == avg[i-1].first) {
            answer[avg[i].second] = answer[avg[i-1].second];
        } else {
            answer[avg[i].second] = i + 1;
        }
    }
    
    return answer;
}