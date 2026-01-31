#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct 회원
{
	int 나이;
	std::string 이름;

	bool operator<(const 회원& other) const noexcept
	{
		return 나이 < other.나이;
	}
};

int main()
{
	int N;
	std::cin >> N;

	std::vector<회원> 회원들;
	회원들.resize(N);

	for (int i = 0; i < N; ++i)
	{
		std::cin >> 회원들[i].나이 >> 회원들[i].이름;
	}

	std::stable_sort(회원들.begin(), 회원들.end());
	
	for (const 회원& 회원 : 회원들)
	{
		std::cout << 회원.나이 << " " << 회원.이름 << std::endl;
	}
}