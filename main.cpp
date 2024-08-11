#include <iostream>

// [2024-08-12]
// 문제 11
// for문을 사용해 아래와 같이 출력되도록 소스코드를 작성해 주세요

int main()
{
	std::cout << "시작" << std::endl;

	for(int i = 1; i <= 5; ++i)
		std::cout << i;
	
	std::cout << std::endl << "종료" << std::endl;

	return 0;
}