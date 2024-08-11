#include <iostream>

// [2024-08-11]
// 문제 12번
// 숫자 1개를 입력받으세요
// 0부터 입력받은 숫자까지 출력 해 주세요
// 만약 3을 입력하셨으면
// 0 1 2 3을 출력 하시면 됩니다.


int main()
{
	int a;

	std::cin >> a;

	for(int i = 0 ; i <= a; ++i)
		std::cout << i << std::endl;

	return 0;
}