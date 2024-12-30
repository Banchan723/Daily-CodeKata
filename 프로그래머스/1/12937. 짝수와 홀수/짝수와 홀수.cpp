#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    if(num%2==0)
    {
        return "Even";
    }
    else 
    {
        return "Odd";
    }
    cout << solution(3) << endl;
    cout << solution(4) << endl;
    
    return 0;
}