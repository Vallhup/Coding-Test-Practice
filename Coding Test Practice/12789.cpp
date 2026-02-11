#include <iostream>
#include <stack>
#include <queue>

int main()
{
	int N;
	std::cin >> N;

	std::queue<int> q;

	for (int i = 0; i < N; ++i)
	{
		int input;
		std::cin >> input;
		q.push(input);
	}
	
	std::stack<int> s;

	int 기준{ 1 };
	while (!q.empty())
	{
		int num1 = q.front();

		int num2{ -1 };
		if (!s.empty())
		{
			num2 = s.top();
		}

		if (num1 == 기준)
		{
			q.pop();
			++기준;
		}

		else if (num2 == 기준)
		{
			s.pop();
			++기준;
		}

		else
		{
			q.pop();
			s.push(num1);
		}
	}

	while(!s.empty())
	{
		int num = s.top();
		s.pop();

		if (num == 기준)
		{
			++기준;
		}

		else
		{
			std::cout << "Sad";
			return 0;
		}
	}

	std::cout << "Nice";
}