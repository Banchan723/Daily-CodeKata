#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    unordered_map<char, int> keyPressCount;

    for (const string& key : keymap) {
        for (int i = 0; i < key.size(); ++i) {
            char ch = key[i];
            int press = i + 1;
            if (keyPressCount.find(ch) == keyPressCount.end()) {
                keyPressCount[ch] = press;
            } else {
                keyPressCount[ch] = min(keyPressCount[ch], press);
            }
        }
    }

    vector<int> answer;
    for (const string& target : targets) {
        int totalPress = 0;
        bool possible = true;
        for (char ch : target) {
            if (keyPressCount.find(ch) == keyPressCount.end()) {
                possible = false;
                break;
            } else {
                totalPress += keyPressCount[ch];
            }
        }
        answer.push_back(possible ? totalPress : -1);
    }

    return answer;
}
