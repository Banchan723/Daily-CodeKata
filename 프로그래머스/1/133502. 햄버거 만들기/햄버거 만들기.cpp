#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> stack;

    for (int i = 0; i < ingredient.size(); ++i) {
        stack.push_back(ingredient[i]);

        int size = stack.size();
        if (size >= 4 &&
            stack[size - 4] == 1 &&
            stack[size - 3] == 2 &&
            stack[size - 2] == 3 &&
            stack[size - 1] == 1) {

            stack.pop_back();
            stack.pop_back();
            stack.pop_back();
            stack.pop_back();
            answer++;
        }
    }

    return answer;
}
