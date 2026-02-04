#include <iostream>
#include <array>
#include <algorithm>

int main()
{
	int x, y, w, h;
	std::cin >> x >> y >> w >> h;

	std::array<int, 4> 후보;
	후보[0] = x;
	후보[1] = y;
	후보[2] = w - x;
	후보[3] = h - y;

	std::cout << *(std::min_element(후보.begin(), 후보.end()));
}