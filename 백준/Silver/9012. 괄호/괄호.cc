#include <iostream>
#include <stack>

using namespace std;

void IsVPS(string value)
{
	string word = value;

	string answer = "YES";

	stack<char> VPS;


	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == '(')
		{
			VPS.push(word[i]);
		}
		else if (!VPS.empty() && word[i] == ')')
		{
			VPS.pop();
		}
		else
		{
			answer = "NO";
			break;
		}
	}

	if (!VPS.empty())
	{
		answer = "NO";
	}

	cout << answer << "\n";
}
	
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int input;

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		string value;

		cin >> value;

		IsVPS(value);
	}

	return 0;
}