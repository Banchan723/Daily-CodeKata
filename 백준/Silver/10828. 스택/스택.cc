#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> answer; // 실제로 스택에 저장되는 값들

    int N; // 몇번 반복할지에 대한 값
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string word; // 어떤 명령어를 썼는지 저장하는 변수

        cin >> word; // 명령어 입력

        int CurrentNum;// 한번 실행될때마다 출력되는 값 변수

        if (word == "push")
        {
            int pushnum; // push일때 스택에 저장할 값
            cin >> pushnum;

            answer.push(pushnum);
        }
        else if (word == "pop")
        {
            if (!answer.empty())
            {
                CurrentNum = answer.top();
                answer.pop();
                cout << CurrentNum << endl;
            }
            else
            {
                CurrentNum = -1;
                cout << CurrentNum << endl;
            }
        }
        else if (word == "size")
        {
            CurrentNum = answer.size();
            cout << CurrentNum << endl;
        }
        else if (word == "empty")
        {
            if (answer.empty())
            {
                CurrentNum = 1;
                cout << CurrentNum << endl;
            }
            else
            {
                CurrentNum = 0;
                cout << CurrentNum << endl;
            }
        }
        else if (word == "top")
        {
            if (!answer.empty())
            {
                CurrentNum = answer.top();
                cout << CurrentNum << endl;

            }
            else
            {
                CurrentNum = -1;
                cout << CurrentNum << endl;
            }
        }
        else
        {
            cout << "잘못입력했음" << endl;
        }
    }
}
