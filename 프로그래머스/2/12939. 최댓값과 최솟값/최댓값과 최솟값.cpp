#include <string>
#include <sstream>
#include <algorithm>
#include <limits>

using namespace std;

string solution(string s) {
    istringstream iss(s);
    int num;
    int minVal = numeric_limits<int>::max();
    int maxVal = numeric_limits<int>::min();
    while (iss >> num) {
        minVal = min(minVal, num);
        maxVal = max(maxVal, num);
    }
    return to_string(minVal) + " " + to_string(maxVal);
}