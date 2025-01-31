#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    int a = 0;
    
    for (int i = 0; i < absolutes.size(); i++)
    {
        a += absolutes[i];
        
        if (signs[i] == true)
        {
            answer += a;
        }
        else
        {
            answer += -a;
        }
        a = 0;
    }
    return answer;
}