#include <iostream>

// [2024-08-17]
// 제목 : LV11 - 연습문제

// 문제 5번
// 1. int형 변수 a, b에 숫자 2개를 입력 받는다.
// 2. int pointer형 변수 p, t를 선언하고 각각 a, b를 가리킨다.
// 3. *p와 *t를 이용하여 두 값을 SWAP한다.
// 4. 변수 *p와 *t를 출력한다.

int main()
{
	int a, b;
	std::cin >> a >> b;

	int *pA = &a;
	int *pB = &b;

	std::cout << "현재 값 : " << *pA << " " << *pB << std::endl;

	int temp = *pA;
	*pA = *pB;
	*pB = temp;

	std::cout << "SWAP 후 값 : " << *pA << " " << *pB << std::endl;

	return 0;
}