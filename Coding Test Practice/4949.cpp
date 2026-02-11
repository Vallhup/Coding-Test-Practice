#include <iostream>
#include <stack>
#include <string>
#include <vector>

int main()
{
	std::string str;
	while (std::getline(std::cin, str))
	{
		if (str == ".") return 0;

		std::stack<int> s;

		bool isValid{ true };
		for (const char& ch : str)
		{
			if (ch == '(')
			{
				s.push(1);
			}

			else if (ch == ')')
			{
				if (s.empty())
				{
					isValid = false;
					break;
				}

				else
				{
					int top = s.top();
					s.pop();

					if (top != 1)
					{
						isValid = false;
						break;
					}
				}
			}

			else if (ch == '[')
			{
				s.push(2);
			}

			else if (ch == ']')
			{
				if (s.empty())
				{
					isValid = false;
					break;
				}

				else
				{
					int top = s.top();
					s.pop();

					if (top != 2)
					{
						isValid = false;
						break;
					}
				}
			}
		}

		if (isValid && s.empty())
		{
			std::cout << "yes\n";
		}

		else
		{
			std::cout << "no\n";
		}
	}
}