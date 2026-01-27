#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>

std::string 결과[4] =
{ "Equilateral", "Isosceles", "Scalene", "Invalid"};

struct Triangle
{
	std::array<int, 3> 변의길이;

	void 입력(const std::array<int, 3>& 입력)
	{
		변의길이 = 입력;
	}


	std::string 출력()
	{
		int max = *(std::max_element(변의길이.begin(), 변의길이.end()));
		int total{ 0 };
		for (int 변 : 변의길이)
		{
			total += 변;
		}

		if (max >= total - max)
			return 결과[3];

		for(int i = 0; i < 3; ++i)
		{
			int a = 변의길이[i];

			int cnt = std::count(변의길이.begin(), 변의길이.end(), a);

			if (cnt == 3)
				return 결과[0];

			if (cnt == 2)
				return 결과[1];
		}

		return 결과[2];
	}
};

int main()
{
	std::vector<Triangle> output;
	std::array<int, 3> input;

	for (int i = 0; i < 1000; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			std::cin >> input[j];
		}

		if (std::count(input.begin(), input.end(), 0) == 3)
			break;

		Triangle t;
		t.입력(input);

		output.push_back(t);
	}

	for (int i = 0; i < output.size(); ++i)
	{
		std::cout << output[i].출력() << std::endl;
	}
}

