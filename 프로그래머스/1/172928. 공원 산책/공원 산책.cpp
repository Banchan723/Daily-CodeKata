#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    int h = park.size();          
    int w = park[0].size();        
    int y = 0, x = 0;             

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (park[i][j] == 'S') {
                y = i;
                x = j;
                break;
            }
        }
    }

    int dy[128] = {0}, dx[128] = {0};
    dy['N'] = -1; dx['N'] =  0;
    dy['S'] =  1; dx['S'] =  0;
    dy['W'] =  0; dx['W'] = -1;
    dy['E'] =  0; dx['E'] =  1;

    for (const string& route : routes) {
        char dir;
        int dist;
        istringstream iss(route);
        iss >> dir >> dist;

        int ny = y, nx = x;
        bool blocked = false;

        for (int i = 1; i <= dist; ++i) {
            int ty = y + dy[dir] * i;
            int tx = x + dx[dir] * i;

            if (ty < 0 || ty >= h || tx < 0 || tx >= w || park[ty][tx] == 'X') {
                blocked = true;
                break;
            }
        }

        if (!blocked) {
            y += dy[dir] * dist;
            x += dx[dir] * dist;
        }
    }

    return {y, x};
}
