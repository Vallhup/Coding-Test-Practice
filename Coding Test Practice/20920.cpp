#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);

	int N, M;
	std::cin >> N >> M;

	std::unordered_map<std::string, int> input;
	input.reserve(N);

	for (int i = 0; i < N; ++i)
	{
		std::string str;
		std::cin >> str;
		if (str.size() >= M)
			input[str]++;
	}

	std::vector<std::string> out;
	out.reserve(input.size());

	for (const auto& [word, count] : input)
	{
		out.push_back(word);
	}

	std::sort(out.begin(), out.end(),
		[&](const std::string& a, const std::string& b)
		{
			if (input[a] != input[b])
				return input[a] > input[b];

			else if (a.size() != b.size())
				return a.size() > b.size();

			else
				return a < b;
		});

	for (const std::string& 단어 : out)
	{
		std::cout << 단어 << "\n";
	}
}