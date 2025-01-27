#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0; // 분리된 문자열의 개수
    int count_x = 0, count_others = 0; // x와 x가 아닌 문자의 개수
    char x = s[0]; // 현재 분리를 시작할 기준 문자

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == x) {
            count_x++; // 기준 문자 x와 같으면 count_x 증가
        } else {
            count_others++; // x가 아니면 count_others 증가
        }

        // 기준 문자와 다른 문자의 개수가 같아지면 문자열 분리
        if (count_x == count_others) {
            answer++;
            count_x = 0; // 개수 초기화
            count_others = 0;

            // 새로운 기준 문자는 다음 글자로 갱신
            if (i + 1 < s.size()) {
                x = s[i + 1];
            }
        }
    }

    // 남은 문자열 처리 (분리되지 못한 나머지 부분 포함)
    if (count_x != 0 || count_others != 0) {
        answer++;
    }

    return answer;
}
