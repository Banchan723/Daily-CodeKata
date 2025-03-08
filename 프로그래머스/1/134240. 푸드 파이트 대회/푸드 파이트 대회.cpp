#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";

    answer += "0";

    for (int i = food.size() - 1; i > 0; i--) { 
        int count = food[i] / 2;

        string temp = string(count, '0' + i);
        answer.insert(0, temp);
        answer.append(temp);
    }

    return answer;
}
