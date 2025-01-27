#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    // 선수 이름 -> 현재 순위 맵
    unordered_map<string, int> rank_map;
    for (int i = 0; i < players.size(); i++) {
        rank_map[players[i]] = i; // 선수 이름과 초기 순위를 저장
    }

    // 호출에 따라 순위 업데이트
    for (const string& calling : callings) {
        int current_rank = rank_map[calling]; // 호출된 선수의 현재 순위
        if (current_rank == 0) continue;     // 1등은 호출되지 않으므로 확인 불필요

        int previous_rank = current_rank - 1; // 바로 앞 선수의 순위
        string previous_player = players[previous_rank]; // 앞에 있는 선수 이름

        // 선수 순서 교환
        swap(players[current_rank], players[previous_rank]);

        // 맵의 순위 정보 업데이트
        rank_map[calling] = previous_rank;
        rank_map[previous_player] = current_rank;
    }

    return players; // 최종 순위를 반환
}
