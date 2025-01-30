#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double sum = 0;
    
    for (const int& i : arr)
    {
        sum+=i;
    }
    
    answer = sum / arr.size();
    
    return answer;
}