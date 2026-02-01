#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	int N;
	std::cin >> N;

	std::vector<std::string> input;
	input.resize(N);

	for (int i = 0; i < N; ++i)
	{
		std::cin >> input[i];
	}

	std::sort(input.begin(), input.end(),
		[](const std::string& a, const std::string& b)
		{
			if (a.size() != b.size())
				return a.size() < b.size();

			else
				return a < b;
		});

	input.erase(std::unique(input.begin(), input.end()), input.end());

	for (const std::string& str : input)
	{
		std::cout << str << "\n";
	}
}