#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    
    // id의 키로 pw라는 값을 찾으면 좋을 것 같은데 map을 이용해볼까?
    unordered_map<string, string> counter;
    for (int i = 0; i < db.size(); i++)
    {
        counter[db[i][0]] = db[i][1];
    }
    
    if (counter[id_pw[0]] == "") answer = "fail";
    else if (counter[id_pw[0]] == id_pw[1]) answer = "login";
    else answer = "wrong pw";
    
    
    return answer;
}