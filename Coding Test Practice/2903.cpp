#include <iostream>
#include <math.h>

int main()
{
	int N;
	std::cin >> N;

	int out;
	if (N == 0) out = 4;
	else
	{
		int k{ 0 };
		for (int i = 1; i <= N; ++i)
		{
			k += std::pow(2, i - 1);
		}

		out = 2 + k;
	}

	std::cout << out * out;
}