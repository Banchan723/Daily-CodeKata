#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    long long pNum = stoll(p);
    
    for (int i = 0; i <= t.length() - p.length(); i++)
    {
        string stt = t.substr(i, p.length());
        long long tNum = stoll(stt);
        
        if (tNum <= pNum)
        {
            answer += 1;
        }
    }
    
    return answer;
}