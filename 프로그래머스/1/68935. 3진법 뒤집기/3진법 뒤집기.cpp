#include <string>
#include <algorithm>
using namespace std;

int solution(int n) {
    string ternary = "";

    while (n > 0) {
        ternary += to_string(n % 3);
        n /= 3;
    }

    int answer = 0, power = 1;
    for (int i = ternary.size() - 1; i >= 0; i--) {
        answer += (ternary[i] - '0') * power;
        power *= 3;
    }

    return answer;
}