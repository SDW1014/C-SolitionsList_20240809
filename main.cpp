#include <iostream>

// 숫자 4개를 변수 b1, b2, b3, b4 에 입력 받아주세요.
// 입력 예시: 9 4 5 3
// 출력 예시: b1이 가장 크다

int main()
{
	int b1, b2, b3, b4;
	
	std::cin >> b1 >> b2 >> b3 >> b4;

	if(b1 > b2 && b1 > b3 && b1 > b4)
		std::cout << "b1이 가장 크다" << std::endl;
	else if(b2 > b1 && b2 > b3 && b2 > b4)
		std::cout << "b2가 가장 크다" << std::endl;
	else if(b3 > b1 && b3 > b2 && b3 > b4)
		std::cout << "b3가 가장 크다" << std::endl;
	else if(b4 > b1 && b4 > b2 && b4 > b3)
		std::cout << "b4가 가장 크다" << std::endl;

	return 0;
}