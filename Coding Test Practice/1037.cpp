#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int 약수의개수;
	std::cin >> 약수의개수;

	std::vector<int> 약수들;
	약수들.resize(약수의개수);

	for (int i = 0; i < 약수의개수; ++i)
	{
		std::cin >> 약수들[i];
	}

	std::sort(약수들.begin(), 약수들.end());

	std::cout << 약수들.front() * 약수들.back();
}