#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    vector<int> realLost;
    vector<int> realReserve;

    for (int l : lost) {
        if (find(reserve.begin(), reserve.end(), l) != reserve.end()) {
            reserve.erase(find(reserve.begin(), reserve.end(), l));
        } else {
            realLost.push_back(l);
        }
    }

    realReserve = reserve;

    for (int r : realReserve) {
        if (find(realLost.begin(), realLost.end(), r - 1) != realLost.end()) {
            realLost.erase(find(realLost.begin(), realLost.end(), r - 1));
        } else if (find(realLost.begin(), realLost.end(), r + 1) != realLost.end()) {
            realLost.erase(find(realLost.begin(), realLost.end(), r + 1));
        }
    }

    return n - realLost.size();
}
