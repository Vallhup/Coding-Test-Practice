#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::string input;
	std::cin >> input;

	const size_t N = input.size();
	char* raw = input.data();

	for (int i = 0; i < N; ++i)
	{
		for (int j = i + 1; j < N; ++j)
		{
			char temp;
			if (raw[i] < raw[j])
			{
				temp = raw[i];
				raw[i] = raw[j];
				raw[j] = temp;
			}
		}
	}

	std::cout << raw;
}