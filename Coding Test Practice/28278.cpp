#include <iostream>
#include <stack>
#include <vector>

class Stack {
public:
	void 명령1(int x)
	{
		_stack.push(x);
	}

	void 명령2()
	{
		if (_stack.empty())
			std::cout << -1 << "\n";

		else
		{
			std::cout << _stack.top() << "\n";
			_stack.pop();
		}
	}

	void 명령3()
	{
		std::cout << _stack.size() << "\n";
	}

	void 명령4()
	{
		if (_stack.empty())
			std::cout << 1 << "\n";

		else
			std::cout << 0 << "\n";
	}
	 
	void 명령5()
	{
		if (_stack.empty())
			std::cout << -1 << "\n";

		else
			std::cout << _stack.top() << "\n";
	}

private:
	std::stack<int> _stack;
};

struct input
{
	int command;
	int value{ -1 };
};

int main()
{
	Stack stack;

	int N;
	std::cin >> N;

	std::vector<input> inputs;
	inputs.resize(N);

	for (int i = 0; i < N; ++i)
	{
		std::cin >> inputs[i].command;
		if (inputs[i].command == 1)
			std::cin >> inputs[i].value;
	}

	for (const input& in : inputs)
	{
		switch (in.command) {
		case 1:
		{
			stack.명령1(in.value);
			break;
		}
		case 2:
		{
			stack.명령2();
			break;
		}
		case 3:
		{
			stack.명령3();
			break;
		}
		case 4:
		{
			stack.명령4();
			break;
		}
		case 5:
		{
			stack.명령5();
			break;
		}
		}
	}
}