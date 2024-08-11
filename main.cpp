#include <iostream>

// [2024-08-12]
// 문제 15번
// 숫자 하나를 입력 받고, 입력받은 값부터 0까지 출력 해주세요.

int main()
{
	int a; 

	std::cin >> a;

	for(int i = a; i >= 0; --i)
		std::cout << i;
	std::cout << std::endl;

	return 0;
}