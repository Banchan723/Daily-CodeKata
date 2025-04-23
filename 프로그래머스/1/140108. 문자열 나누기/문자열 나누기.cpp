#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int count_x = 0, count_others = 0;
    char x = s[0]; 

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == x) {
            count_x++; 
        } else {
            count_others++; 
        }

        if (count_x == count_others) {
            answer++;
            count_x = 0;
            count_others = 0;

            if (i + 1 < s.size()) {
                x = s[i + 1];
            }
        }
    }

    if (count_x != 0 || count_others != 0) {
        answer++;
    }

    return answer;
}
