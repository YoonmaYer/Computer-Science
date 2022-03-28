#include <iostream>
// 자연수 n이 주어졌을 때, 1부터 n까지 한 줄에 하나씩
// 출력하는 프로그램을 작성하시오.
int main()
{
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		std::cout << i << '\n';
	}
	return 0;
}