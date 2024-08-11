#include <iostream>

// [2024-08-11]
// 문제 8번
// 숫자 하나를 입력 받고 "##" 을 입력받은 숫자만큼 출력 해주세요.

int main()
{
	int a;
	
	std::cin >> a;

	for(int i = 0; i < a; ++i)
		std::cout << "##" << std::endl;

	return 0;
}