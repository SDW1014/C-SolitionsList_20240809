#include <iostream>

// [2024-08-19]
// 제목 : LV15 - 포인터 변수의 원리와 문자열 (포인터 변수 심화)

// 포인터 변수 심화 
// 1. 포인터 변수는 배열처럼 사용 가능
// 2. (*포인터 변수 + 숫자)가 주요 접근 방법인데. 
// 3. 불편하기에 배열처럼 접근 할 수 있도록 되어있다. 
int main()
{
	char test[10] = "Hello";

	char ch = 'A';
	char* p = &ch;

	p = test;

	std::cout << "*p : " << *p << std::endl;
	std::cout << "*(p+1) : " << *(p+1) << std::endl;
	std::cout << "*(p+2) : " << *(p+2) << std::endl;

	std::cout << "p[0] : " << p[0] << std::endl;
	std::cout << "p[1] : " << p[1] << std::endl;
	std::cout << "p[2] : " << p[2] << std::endl;

	int test2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int* pInt = test2;

	std::cout << "test2: " << *test2 << std::endl;
	std::cout << "(test2 + 1): " << *(test2 + 1) << std::endl;
	std::cout << "(test2 + 2): " << *(test2 + 2) << std::endl;

	std::cout << "test2[0]: " << test2[0] << std::endl;
	std::cout << "test2[1]: " << test2[1] << std::endl;
	std::cout << "test2[2]: " << test2[2] << std::endl;

	return 0;
}