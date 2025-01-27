#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool is_even = true;
    
    for (int c : s)
    {
        if (c == ' ')
        {
            answer += c;
            is_even = true;
        }
        else
        {
            answer += is_even ? toupper(c) : tolower(c);
            is_even = !is_even;
        }
    }
    return answer;
}