#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    unordered_set<char> skipSet(skip.begin(), skip.end());

    for (char c : s) {
        int count = 0;
        char nextChar = c;

        while (count < index) {
            nextChar++;
            if (nextChar > 'z') nextChar = 'a';
            if (skipSet.find(nextChar) == skipSet.end()) {
                count++;
            }
        }

        answer += nextChar;
    }

    return answer;
}
