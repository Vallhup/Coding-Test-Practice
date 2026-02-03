#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

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

	std::sort(input.begin(), input.end());

	// 1. 산술평균
	int 전체합{ 0 };
	for (int in : input)
	{
		전체합 += in;
	}

	int 산술평균 = static_cast<int>(std::round((double)전체합 / N));
	if (산술평균 == -0) 산술평균 = 0;

	// 2. 중앙값
	int 중앙인덱스 = (N - 1) / 2;
	int 중앙값 = input[중앙인덱스];

	// 3. 최빈값
	std::map<int, int> 빈도수;
	for (int in : input)
	{
		빈도수[in]++;
	}

	int 최고빈도{ 0 };
	for (const auto& [num, count] : 빈도수)
	{
		if (count > 최고빈도)
			최고빈도 = count;
	}

	std::vector<int> 최빈값들;
	for (const auto& [num, count] : 빈도수)
	{
		if (count == 최고빈도)
			최빈값들.push_back(num);
	}

	int 최빈값{ 0 };
	if (최빈값들.size() == 1) 최빈값 = 최빈값들[0];
	else 최빈값 = 최빈값들[1];

	// 4. 범위
	int 범위 = input[N - 1] - input[0];

	// 출력
	std::cout << 산술평균 << "\n";
	std::cout << 중앙값 << "\n";
	std::cout << 최빈값 << "\n";
	std::cout << 범위 << "\n";
}