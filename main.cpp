#include <iostream>

// [2024-08-12]
// 제목 : 숫자 입력 및 출력
// 입력: 숫자 하나를 입력 받고
// 출력: 입력받은 숫자만큼 "##"과 "@@"을 출력 해 주세요.

int main()
{
	int a; 

	std::cin >> a;

	for(int i = 0 ; i < a; ++i)
		std::cout << "##" << std::endl << "@@" << std::endl;
	
	return 0;
}