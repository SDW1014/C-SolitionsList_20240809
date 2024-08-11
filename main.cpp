#include <iostream>

// [2024-08-11]
// 숫자 1개를 입력 받으세요
// 만약 그 숫자가 10보다 같거나 크면
// "WOW"를 출력하세요
// 그렇지 않으면
// "OMG"를 출력하세요

int main()
{
	int a;
	
	std::cin >> a;
	
	if(a >= 10)
	{
		std::cout << "WOW" << std::endl;
		return 0;
	}

	std::cout << "OMG" << std::endl;
	return 0;
}