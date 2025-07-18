#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;

    // 현재 다리위에있는 트럭
    queue<int> truck;
    // 다리 위에 트럭들에 총합
    int sum = 0;
    // 다음 트럭에 무게
    int nexttruck = 0;
    
    while(1)
    {
        // 마지막 트럭이라면
        if (nexttruck == truck_weights.size())
        {
            //  현재 answer 값에 다리 길이만큼을 더해줌
            answer += bridge_length;
            break; // while문 종료
        }
        
        // 시간 증가
        answer++;
        
        // temp = 현재 트럭에 무게
        int temp = truck_weights[nexttruck];
        
        // 차량이 다 다리 위를 다 건넜을 경우
        if (truck.size() == bridge_length)
        {
            // 다리 위에 총합에서 달리고있는 첫번째 트럭에 무게를 빼준다.
            sum -= truck.front();
            // 달리고있는 트럭에 첫번째는 없애줌 (다 지나갔다는 뜻)
            truck.pop();
        }
        
        // 다리위에있는 트럭들에 무게와 현재 트럭에 무게가 달릴 수 있는 전체 무게보다 작거나  같다면
        if (sum + temp <= weight)
        {
            // 달리고있는 트럭queue에 달릴 수 있는 트럭을 추가해주고
            truck.push(temp);
            // 다리 위에 총합 무게에 현재 달릴 수 있는 트럭에 무게를 더해주고
            sum += temp;
            // 다릴 수 있는 트럭이 지나가니 다음 트럭이 지나갈 수 있게 nexttruck에 1씩 증가
            nexttruck++;
        }
        else // 다리 위에 무게를 초과하는 다음 트럭이 왔다면
        {
            // 다리위에 트럭이 못 지나가니 0을 그냥 넣어줌
            truck.push(0);
        }
    }
   
    return answer;
}