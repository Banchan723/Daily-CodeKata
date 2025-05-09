#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    unordered_map<string, unordered_set<string>> reports;
    unordered_map<string, int> report_count;
    unordered_map<string, int> mail_count;

    for (const auto& r : report) {
        int space = r.find(' ');
        string from = r.substr(0, space);
        string to = r.substr(space + 1);
        if (reports[from].insert(to).second) {
            report_count[to]++;
        }
    }

    for (const auto& [from, targets] : reports) {
        for (const auto& to : targets) {
            if (report_count[to] >= k) {
                mail_count[from]++;
            }
        }
    }

    vector<int> answer;
    for (const auto& id : id_list) {
        answer.push_back(mail_count[id]);
    }

    return answer;
}
