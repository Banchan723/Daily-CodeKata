#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    unordered_map<char, int> score;

    for (size_t i = 0; i < survey.size(); ++i) {
        char disagree = survey[i][0], agree = survey[i][1];
        int choice = choices[i];

        if (choice < 4) score[disagree] += 4 - choice;
        else if (choice > 4) score[agree] += choice - 4;
    }

    string types = "RTCFJMAN";
    string answer = "";

    for (int i = 0; i < 8; i += 2) {
        char first = types[i], second = types[i + 1];
        answer += score[first] >= score[second] ? first : second;
    }

    return answer;
}
