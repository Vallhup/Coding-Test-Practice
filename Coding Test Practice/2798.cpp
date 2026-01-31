#include <iostream>
#include <vector>

int main()
{
	int N, M;
	std::cin >> N >> M;

	std::vector<int> input;
	input.resize(N);

	for (int i = 0; i < N; ++i)
	{
		std::cin >> input[i];
	}

	int max{ 0 };
	for (int i = 0; i < N; ++i)
	{
		for (int j = i + 1; j < N; ++j)
		{
			for (int k = j + 1; k < N; ++k)
			{
				int temp = input[i] + input[j] + input[k];
				if (max < temp && temp <= M)
					max = temp;
			}
		}
	}

	std::cout << max;
}