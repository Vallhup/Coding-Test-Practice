#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

int main()
{
	std::array<int, 30> list;

	for (int i = 0; i < 30; ++i)
	{
		list[i] = i + 1;
	}

	std::vector<int> inputList;

	for (int i = 0; i < 28; ++i)
	{
		int input;
		std::cin >> input;
		inputList.push_back(input);
	}

	std::sort(inputList.begin(), inputList.end());

	std::vector<int> outputList;
	for (int a : list)
	{
		if (!std::binary_search(inputList.begin(), inputList.end(), a))
		{
			outputList.push_back(a);
		}
	}

	for (int i = 0; i < 2; ++i)
	{
		std::cout << outputList[i] << std::endl;
	}
}