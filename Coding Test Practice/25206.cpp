#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <string>
#include <unordered_map>

std::unordered_map<std::string, float> ÆòÁ¡¸Ê =
{
	{ "A+", 4.5 },
	{ "A0", 4.0 },
	{ "B+", 3.5 },
	{ "B0", 3.0 },
	{ "C+", 2.5 },
	{ "C0", 2.0 },
	{ "D+", 1.5 },
	{ "D0", 1.0 },
	{ "F",  0.0 },
};

struct Score
{
	std::string name;
	float ÇÐÁ¡;
	std::string ÆòÁ¡;
};

int main()
{
	std::array<Score, 20> scores;
	for (int i = 0; i < 20; ++i)
	{
		Score score;
		std::cin >> score.name;
		std::cin >> score.ÇÐÁ¡;
		std::cin >> score.ÆòÁ¡;

		scores[i] = score;
	}

	float ÇÐÁ¡ÃÑÇÕ{ 0.0f };
	float ÇÐÁ¡ÆòÁ¡°öÃÑÇÕ{ 0.0f };
	for (const Score& score : scores)
	{
		if (score.ÆòÁ¡ != "P")
		{
			ÇÐÁ¡ÆòÁ¡°öÃÑÇÕ += (ÆòÁ¡¸Ê[score.ÆòÁ¡] * score.ÇÐÁ¡);
			ÇÐÁ¡ÃÑÇÕ += score.ÇÐÁ¡;
		}
	}

	std::cout << ÇÐÁ¡ÆòÁ¡°öÃÑÇÕ / ÇÐÁ¡ÃÑÇÕ;
}