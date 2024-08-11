#include <iostream>

// [2024-08-12]
// 문제 10
// 숫자 하나를 입력 받아 홀수 출력하기.
// 규칙: 입력한 숫자까지의 홀수를 출력한다.

int main()
{
	int a; 

	std::cin >> a;

	for(int i = 0; i < a * 2; ++i)
		if(i % 2)
			std::cout << i << " ";
	std::cout << std::endl;
	
	return 0;
}