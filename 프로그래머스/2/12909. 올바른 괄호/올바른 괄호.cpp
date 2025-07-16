#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    stack<char> space;
    
    if (s[0] == ')')
    {
        answer = false;
    }
    else
    {
         for (int i = 0; i < s.size(); i++)
         {
             if (s[i] == '(')
             {
                 space.push('(');
             }
             else
             {
                 if (!space.empty() && s[i] == ')')
                 {
                     space.pop();
                 }
             }
             
             if (space.empty())
             {
                 answer = true;
             }
             else
             {
                 answer = false;
             }
         }
        
    }
    
    return answer;
}