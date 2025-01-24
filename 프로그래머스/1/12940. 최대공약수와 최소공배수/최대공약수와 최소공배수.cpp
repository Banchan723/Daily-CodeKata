#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int g = gcd(n, m);
    int l = (n * m) / g;
    
    answer.push_back(g);
    answer.push_back(l);
    
    return answer;
}