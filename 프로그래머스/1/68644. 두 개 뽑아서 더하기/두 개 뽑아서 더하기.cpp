#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> sumSet;
    
    for (size_t i = 0; i < numbers.size(); i++)
    {
        for (size_t j = i + 1; j < numbers.size(); j++)
        {
            sumSet.insert(numbers[i] + numbers[j]);
        }
    }
    
    vector<int> answer(sumSet.begin(), sumSet.end());
    
    return answer;
}