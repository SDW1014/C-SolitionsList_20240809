#include <iostream>

// 문제 9번
// 숫자 1개를 변수 a에 입력 받고, 다음 규칙에 맞게 출력하세요.
// 5 입력함
// a++을 수행하면 6이 됩니다

int main()
{
	int a;
	std::cin >> a;

	std::cout << a << "를 입력하셨습니다." << std::endl;
	std::cout << "a++을 수행하면 " << a+1 << "이 됩니다." << std::endl;

	return 0;
}