#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    vector<string> canSpeak = {"aya", "ye", "woo", "ma"};
    int answer = 0;

    for (string s : babbling) {
        string prev = "";
        int idx = 0;
        bool valid = true;

        while (idx < s.size()) {
            bool matched = false;
            for (string word : canSpeak) {
                if (s.substr(idx, word.size()) == word && word != prev) {
                    prev = word;
                    idx += word.size();
                    matched = true;
                    break;
                }
            }
            if (!matched) {
                valid = false;
                break;
            }
        }

        if (valid) answer++;
    }

    return answer;
}
