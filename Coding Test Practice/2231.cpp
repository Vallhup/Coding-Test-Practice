#include <iostream>
#include <string>
#include <cmath>

int main()
{
	int N;
	std::cin >> N;

	for (int out = 0; out < N; ++out)
	{
		const std::string outStr = std::to_string(out);
		const size_t 자릿수 = outStr.size();

		int 분해합{ out };
		for (size_t i = 0; i < 자릿수; ++i)
		{
			const int a = static_cast<int>(std::pow(10, i));
			분해합 += (out / a) % 10;
		}

		if (N == 분해합)
		{
			std::cout << out;
			return 0;
		}
	}

	std::cout << 0;
}