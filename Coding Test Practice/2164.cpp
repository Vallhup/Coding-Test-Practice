#include <iostream>
#include <queue>

int main()
{
	int N;
	std::cin >> N;

	std::queue<int> q;
	for (int i = 1; i <= N; ++i)
		q.push(i);

	for (int i = 0; i < N - 1; ++i)
	{
		q.pop();

		int temp = q.front();
		q.pop();
		q.push(temp);
	}

	std::cout << q.front() << std::endl;
}