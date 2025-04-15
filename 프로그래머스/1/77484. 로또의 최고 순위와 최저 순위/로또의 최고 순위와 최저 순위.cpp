#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    unordered_set<int> win_set(win_nums.begin(), win_nums.end());
    
    int zero_count = 0;
    int match_count = 0;
    
    for (int num : lottos) {
        if (num == 0)
            zero_count++;
        else if (win_set.count(num))
            match_count++;
    }
    
    auto rank = [](int cnt) {
        return cnt >= 2 ? 7 - cnt : 6;
    };

    return {rank(match_count + zero_count), rank(match_count)};
}
