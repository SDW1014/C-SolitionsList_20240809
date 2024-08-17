#include <iostream>

// [2024-08-17]
// 제목 : LV11 - 기본적인 사용과 16진수의 주소값
// 1. void* : 보통 주소를 저장하기 위해서 사용한다. 
// 2. 주소값은 16진수로 표현한다. (0x00000000)

int main()
{
	int number = 0;
	void* p = &number;

	std::cout << &number << std::endl;

	return 0;
}