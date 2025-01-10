#include <vector>
#include <numeric> // accumulate를 사용하기 위해 포함

using namespace std;

int solution(vector<int> numbers) {
    int total = 45; // 0부터 9까지의 합
    int sum_of_numbers = accumulate(numbers.begin(), numbers.end(), 0); // numbers 배열의 합
    return total - sum_of_numbers;
}
