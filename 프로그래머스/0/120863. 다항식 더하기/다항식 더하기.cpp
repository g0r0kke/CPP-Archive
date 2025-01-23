#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    vector<string> s_list;
    // stringstream을 생성하고 문자열 polynomial 스트림에 넣는다.
    stringstream ss(polynomial);
    string temp;
    int x = 0, y = 0;
    
    // 공백을 기준으로 분리된 문자열을 temp에 저장
    // 문자열 벡터 s_list에 temp 문자열 요소 추가
    while(ss >> temp) s_list.push_back(temp);
    // 문자열 벡터 s_list 순회
    for(int i = 0; i < s_list.size(); i++) {
        // 맨 끝 문자가 x라면
        if(s_list[i][s_list[i].size() - 1] == 'x') {
            // s_list[i]의 크기가 1이면 x에 1을 더한다.
            if(s_list[i].size() == 1) x += 1;
            // 크기가 1이 아니라면 0번째 인덱스부터 (s_list[i]의 크기-1) 길이만큼
            // s_list[i]의 부분 문자열을 만든 다음 정수로 변환에서 x에 더한다.
            // 예를 들어 3x라면... 3부터 (2-1) 길이만큼 부분 문자열을 만들면 3이 나온다.
            else x += stoi(s_list[i].substr(0, s_list[i].size() - 1));
        }
        else if(s_list[i] == "+") continue;
        // 맨 끝 문자가 x도 아니고, 현재 문자가 더하기도 아니면 바로 정수로 변환해 y에 더한다.
        // y에 더하는 이유는 상수항이기 때문
        else y += stoi(s_list[i]);
    }
    
    // s_list 순회가 끝나고 x가 0이 아니라면
    if(x != 0){
        // x가 1이라면 answer에 x를 더한다.
        if(x == 1) answer += "x";
        // x가 0도 1도 아니라면 answer에 정수형 x를 string 타입으로 변환 후
        // string 타입의 "x"를 붙인다.
        else answer += to_string(x) + "x";
    }
    // y가 0이 아니라면
    if(y != 0){
        // answer이 공백이 아니라면 상수항 앞에 + 붙이기
        // + 뒤에 정수형 y를 string 타입으로 변환해서 붙이기
        if(answer != "") answer += (" + " + to_string(y));
        // answer이 공백이라면
        // 바로 answer에 정수형 y를 string 타입으로 변환해서 넣어주면 된다.
        else answer += to_string(y);
    }
    return answer;
}