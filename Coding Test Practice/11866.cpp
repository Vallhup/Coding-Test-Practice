#include <iostream>
#include <queue>

int main()
{
	int N, K;
	std::cin >> N >> K;

	std::queue<int> q1;
	std::queue<int> q2;
	std::queue<int> q3;

	for (int i = 0; i < N; ++i)
		q1.push(i + 1);

	int count{ 1 };
	while (q3.size() != N)
	{
		while (!q1.empty())
		{
			int temp = q1.front();
			q1.pop();

			if (count % K != 0)
				q2.push(temp);

			else
				q3.push(temp);

			++count;
		}

		while (!q2.empty())
		{
			int temp = q2.front();
			q2.pop();

			if (count % K != 0)
				q2.push(temp);

			else
				q3.push(temp);

			++count;
		}
	}

	std::cout << "<";
	
	for (int i = 0; i < N - 1; ++i)
	{
		std::cout << q3.front() << ", ";
		q3.pop();
	}

	std::cout << q3.front() << ">";
}