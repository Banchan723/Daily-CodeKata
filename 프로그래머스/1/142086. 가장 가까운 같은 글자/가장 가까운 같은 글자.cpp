#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(s.size(), -1);
    unordered_map<char, int> last_seen; 

    for (int i = 0; i < s.size(); i++) 
    {
        if (last_seen.find(s[i]) != last_seen.end()) 
        {
            answer[i] = i - last_seen[s[i]];
        }
        last_seen[s[i]] = i;
    }

    return answer;
}
