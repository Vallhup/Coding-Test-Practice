#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>

int main()
{
	int N;
	std::cin >> N;

	std::vector<int> input;
	input.resize(N);

	for (int i = 0; i < N; ++i)
	{
		std::cin >> input[i];
	}

	std::map<int, int> map;
	for (int a : input)
	{
		map[a] = 0;
	}

	int min{ -1'000'000'000 };
	int i{ 0 };
	for (auto [key, val] : map)
	{
		if (min < key)
		{
			min = key;
			map[key] += i++;
		}
	}

	for (int& a : input)
	{
		a = map[a];
	}

	for (int a : input)
	{
		std::cout << a << " ";
	}
}