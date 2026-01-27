#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::string input;
	std::cin >> input;

	constexpr std::array<char, 26> alphabets = {
		'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M', 'N',
		'O', 'P', 'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z'
	};

	std::array<int, 26> count{ 0, };
	for (int i = 0; i < 26; ++i)
	{
		count[i] += std::count(input.begin(), input.end(), alphabets[i]);
		count[i] += std::count(input.begin(), input.end(), alphabets[i] + 32);
	}

	int max{ -1 };
	int maxIndex{ 0 };
	for (int i = 0; i < 26; ++i)
	{
		if (count[i] > max)
		{
			max = count[i];
			maxIndex = i;
		}
	}

	if (std::count(count.begin(), count.end(), max) == 1)
		std::cout << alphabets[maxIndex];

	else 
		std::cout << "?";
}