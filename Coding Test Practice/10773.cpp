#include <iostream>
#include <stack>
#include <vector>

int main()
{
	std::vector<int> input_v;

	int K;
	std::cin >> K;

	for (int i = 0; i < K; ++i)
	{
		int input;
		std::cin >> input;

		if (input == 0)
			input_v.pop_back();

		else
			input_v.push_back(input);
	}

	int sum{ 0 };
	for (int num : input_v)
		sum += num;

	std::cout << sum << std::endl;
}