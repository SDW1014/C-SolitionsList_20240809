#include <iostream>

// [2024-08-12]
// 문제 1번 
// 변수 a, b에 숫자 2개 입력받기 및 a ~ b까지 출력
// TIP) WHILE를 사용

int main()
{
	int a, b;

	std::cin >> a >> b;

	while(a <= b)
	{
		std::cout << a << std::endl;
		a++;
	}

	return 0;
}