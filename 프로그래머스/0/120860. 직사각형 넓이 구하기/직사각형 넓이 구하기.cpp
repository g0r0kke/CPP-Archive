#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    // x좌표들 중 최대값-최소값 = 가로 길이
    int max_x = dots[0][0], min_x = dots[0][0];
    // y좌표들 중 최대값-최소값 = 세로 길이
    int max_y = dots[0][1], min_y = dots[0][1];
    
    for(const auto& dot : dots) {
        max_x = max(max_x, dot[0]);
        min_x = min(min_x, dot[0]);
        max_y = max(max_y, dot[1]);
        min_y = min(min_y, dot[1]);
    }
    
    return abs((max_x - min_x) * (max_y - min_y));
}