#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int find_number = 0;
    
    sort(numbers.begin(), numbers.end());
    
    for (int i = 0; i < 10; i++)
    {
        if (find_number < numbers.size() && i == numbers[find_number])
        {
            find_number++;
        }
        else
        {
            answer += i;
        }
    }
    return answer;
}