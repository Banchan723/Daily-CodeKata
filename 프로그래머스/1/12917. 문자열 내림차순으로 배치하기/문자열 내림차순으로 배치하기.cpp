#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string descendings(string s)
{
        sort(s.begin(), s.end(), greater<char>());
        return s;    
}

string solution(string s) {
    string answer = "";
    
    answer = descendings(s);
    
    return answer;
}