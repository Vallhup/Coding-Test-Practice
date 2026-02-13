#include <iostream>
#include <queue>
#include <vector>
#include <string>

class Queue final {
public:
	void push(int x)
	{
		q.push(x);
	}

	void pop()
	{
		if (q.empty())
			std::cout << -1 << '\n';

		else
		{
			std::cout << q.front() << '\n';
			q.pop();
		}
	}

	void size()
	{
		std::cout << q.size() << '\n';
	}

	void empty()
	{
		std::cout << static_cast<int>(q.empty()) << '\n';
	}

	void front()
	{
		if (q.empty())
			std::cout << -1 << '\n';

		else
			std::cout << q.front() << '\n';
	}

	void back()
	{
		if (q.empty())
			std::cout << -1 << '\n';

		else
			std::cout << q.back() << '\n';
	}

private:
	std::queue<int> q;
};

struct 명령
{
	std::string 명령어;
	int value{ -1 };
};

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N;
	std::cin >> N;

	Queue q;

	for (int i = 0; i < N; ++i)
	{
		명령 input;
		std::cin >> input.명령어;

		if (input.명령어 == "push")
		{
			std::cin >> input.value;
		}

		if (input.명령어 == "push")
			q.push(input.value);

		else if (input.명령어 == "pop")
			q.pop();

		else if (input.명령어 == "size")
			q.size();

		else if (input.명령어 == "empty")
			q.empty();

		else if (input.명령어 == "front")
			q.front();

		else if (input.명령어 == "back")
			q.back();
	}
}