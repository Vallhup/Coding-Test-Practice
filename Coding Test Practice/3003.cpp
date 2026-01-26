#include <iostream>
#include <array>

int main()
{
	std::array<int, 6> 정답{ 1, 1, 2, 2, 2, 8 };
	std::array<int, 6> 입력;

	for (int i = 0; i < 6; ++i)
	{
		std::cin >> 입력[i];
	}

	for (int i = 0; i < 6; ++i)
	{
		정답[i] = 정답[i] - 입력[i];
	}

	for (int a : 정답)
	{
		std::cout << a << " ";
	}
}