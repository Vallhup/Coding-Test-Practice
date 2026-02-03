#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

struct 기록
{
	std::string a;
	std::string b;
};

int main()
{
	int N;
	std::cin >> N;

	std::vector<기록> input;
	input.resize(N);

	for (int i = 0; i < N; ++i)
	{
		std::cin >> input[i].a >> input[i].b;
	}

	std::unordered_set<std::string> 춤추는사람들;
	춤추는사람들.reserve(N);
	춤추는사람들.insert("ChongChong");

	for (const 기록& in : input)
	{
		auto aIt = std::find(춤추는사람들.begin(), 춤추는사람들.end(), in.a);
		if (aIt != 춤추는사람들.end())
		{
			춤추는사람들.insert(in.b);
		}

		auto bIt = std::find(춤추는사람들.begin(), 춤추는사람들.end(), in.b);
		if (bIt != 춤추는사람들.end())
		{
			춤추는사람들.insert(in.a);
		}
	}

	std::cout << 춤추는사람들.size();
}