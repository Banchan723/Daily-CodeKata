#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int small = min(a, b);
    int big = max(a, b);
    
    for (int i = small; i <= big; i++ )
    {
        answer += i;
    }
    return answer;
}