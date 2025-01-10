#include <vector>
#include <algorithm> // min_element 사용

using namespace std;

vector<int> solution(vector<int> arr) {
    // 배열 길이가 1인 경우 [-1] 반환
    if (arr.size() == 1) {
        return {-1};
    }
    
    // 최소값 찾기
    int minValue = *min_element(arr.begin(), arr.end());
    
    // 최소값 제거 후 새로운 배열 생성
    vector<int> answer;
    for (int num : arr) {
        if (num != minValue) {
            answer.push_back(num);
        }
    }
    
    return answer;
}
