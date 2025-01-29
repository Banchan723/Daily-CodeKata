#include <cmath>

long long solution(long long n) {
    long long sqrt_n = sqrt(n);  // 제곱근 구하기
    if (sqrt_n * sqrt_n == n) {
        return (sqrt_n + 1) * (sqrt_n + 1);  // x+1의 제곱 반환
    }
    return -1;  // 제곱수가 아니면 -1 반환
}
