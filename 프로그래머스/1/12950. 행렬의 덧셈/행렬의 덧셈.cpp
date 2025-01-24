#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer(arr1.size(), vector<int>(arr1[0].size())); // `answer` 초기화

    for (int i = 0; i < arr1.size(); i++) {
        for (int j = 0; j < arr1[i].size(); j++) { // `arr1[i].size()`로 수정
            answer[i][j] = arr1[i][j] + arr2[i][j]; // 올바른 문법 사용
        }
    }
    return answer;
}
