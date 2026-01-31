#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>

int main()
{
	int N;
	std::cin >> N;

	std::vector<std::unordered_map<std::string, int>> maps;
	for (int i = 0; i < N; ++i)
	{
		std::string str;
		std::cin >> str;

		if (str == "ENTER")
			maps.push_back(std::unordered_map<std::string, int>());

		else
		{
			maps.back()[str]++;
		}
	}

	int out{ 0 };
	for (const auto& map : maps)
	{
		out += map.size();
	}

	std::cout << out;
}