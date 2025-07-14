#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (int i = 0; i < commands.size(); i++)
    {
        int Start = commands[i][0] - 1;
        int End = commands[i][1] - 1;
        int FindNum = commands[i][2] - 1;
        
        vector<int> v;
        
        for (int j = Start; j <= End; j++) 
        {
           v.push_back(array[j]);
        }
        
        sort(v.begin(), v.end());
        
        answer.push_back(v[FindNum]);
    }
    return answer;
}