#include <iostream>
#include <stack>
#include <string>
#include <vector>

int main()
{
	int T;
	std::cin >> T;

	for (int i = 0; i < T; ++i)
	{
		std::stack<char> s;

		std::string str;
		std::cin >> str;

		bool isValid{ true };
		for (const char& c : str)
		{
			if (c == '(')
			{
				s.push(c);
			}

			else if (c == ')')
			{
				if (s.empty())
				{
					isValid = false;
					break;
				}

				else
				{
					s.pop();
				}
			}
		}

		if (isValid && s.empty())
		{
			std::cout << "YES\n";
		}

		else
		{
			std::cout << "NO\n";
		}
	}
}