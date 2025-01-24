#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) { // 세로 길이 m만큼 반복
        for (int j = 0; j < n; j++) { // 가로 길이 n만큼 반복
            cout << "*";
        }
        cout << endl; // 한 줄 끝난 후 줄바꿈
    }

    return 0;
}
