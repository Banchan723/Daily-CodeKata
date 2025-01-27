#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool iseven = true;
    
    for (int c : s)
    {
        if (c == ' ')
        {
            answer += c;
            iseven = true;
        }
        else
        {
            answer += iseven ? toupper(c) : tolower(c);
            iseven = !iseven;
        }
    }
    return answer;
}