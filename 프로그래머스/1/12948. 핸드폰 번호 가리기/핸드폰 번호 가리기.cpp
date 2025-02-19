#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = phone_number;
    
    int count = 0;
    int count2 = 0;
    
    for (int i = 0; i < phone_number.size(); i++)
{
    count += 1;
}

for (int i = 0; i < count - 4; i++)
{
    answer[i] = '*';
    count2 += 1;
}

for (int i = count2; i < count; i++)
{
    answer[i] = phone_number[i];
}
    
    
    return answer;
}