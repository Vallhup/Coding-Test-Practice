#include <iostream>
#include <vector>
#include <algorithm>

struct Pos
{
	int x;
	int y;

	bool operator<(const Pos& other) const noexcept
	{
		if (y != other.y)
			return y < other.y;

		else
			return x < other.x;
	}
};

int main()
{
	int N;
	std::cin >> N;

	std::vector<Pos> input;
	input.resize(N);

	for (int i = 0; i < N; ++i)
	{
		std::cin >> input[i].x >> input[i].y;
	}

	std::sort(input.begin(), input.end());

	for (const Pos& pos : input)
	{
		printf("%d %d\n", pos.x, pos.y);
	}
}