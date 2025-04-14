#include <string>
#include <vector>

using namespace std;

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            count += (i * i == n) ? 1 : 2;
        }
    }
    return count;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    for (int i = 1; i <= number; ++i) {
        int attack = countDivisors(i);
        if (attack > limit) attack = power;
        answer += attack;
    }
    return answer;
}
