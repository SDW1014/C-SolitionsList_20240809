#include <iostream>

// [2024-08-18]
// 제목 : LV12 - 복습문제

// 문제 2번
// 변수 a, b를 선언합니다.
// char형 변수 c, d를 선언합니다.
// 포인터 변수 4개를 선언합니다.
// p1 ~ p4를 이용하여 문제를 해결합니다.
// p3가 가리키고 있는 값을 p1이 가리키는 값 만큼 반복해서 출력합니다.
// p4가 가리키고 있는 값을 p2가 가리키는 값 만큼 반복해서 출력합니다.

int main()
{
	int a, b;
	char c, d;

	std::cin >> a >> b >> c >> d;

	void *p1 = &a;
	void *p2 = &b;
	void *p3 = &c;
	void *p4 = &d;

	std::cout << *static_cast<int*>(p1) << std::endl;

	for(int i = 0; i < *static_cast<int*>(p1); i++)
		std::cout << *static_cast<char*>(p3);

	for(int i = 0; i < *static_cast<int*>(p2); i++)
		std::cout << *static_cast<char*>(p4);
	
	return 0;
}