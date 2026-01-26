#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int N;
	std::cin >> N;

	std::vector<double> scores;
	scores.resize(N);
	
	for (int i = 0; i < N; ++i)
	{
		std::cin >> scores[i];
	}

	double M = *(std::max_element(scores.begin(), scores.end()));

	double temp{ 0 };
	for (double score : scores)
	{
		temp += (score / M) * 100;
	}

	std::cout << temp / N;
}