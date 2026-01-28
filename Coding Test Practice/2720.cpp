#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

int main()
{
	int T;
	std::cin >> T;
	
	std::vector<int> input(T);
	for (int i = 0; i < T; ++i)
	{
		std::cin >> input[i];
	}

	std::vector<int> quarter(T);
	std::vector<int> dime(T);
	std::vector<int> nickel(T);
	std::vector<int> penny(T);

	for (int i = 0; i < T; ++i)
	{
		int q{ 0 };
		while (input[i] >= 25)
		{
			input[i] -= 25;
			q++;
		}

		quarter[i] = q;

		int d{ 0 };
		while (input[i] >= 10)
		{
			input[i] -= 10;
			d++;
		}

		dime[i] = d;

		int n{ 0 };
		while (input[i] >= 5)
		{
			input[i] -= 5;
			n++;
		}

		nickel[i] = n;

		int p{ 0 };
		while (input[i] >= 1)
		{
			input[i] -= 1;
			p++;
		}

		penny[i] = p;
	}

	for (int i = 0; i < T; ++i)
	{
		std::cout << quarter[i] << " " << dime[i] << " "
			<< nickel[i] << " " << penny[i] << std::endl;
	}
}