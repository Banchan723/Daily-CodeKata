#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(vector<string> seoul) {
    // "Kim"의 위치를 찾는다
    for (int i = 0; i < seoul.size(); i++) {
        if (seoul[i] == "Kim") {
            // 위치를 기반으로 원하는 문자열을 반환
            return "김서방은 " + to_string(i) + "에 있다";
        }
    }
    return ""; // 이 코드는 실행되지 않음 ("Kim"은 반드시 포함된다고 했으므로)
}

int main() {
    vector<string> seoul = {"Jane", "Kim"};
    cout << solution(seoul) << endl;
    return 0;
}
