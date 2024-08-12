#include <iostream>

// [2024-08-12]
// 문제 13번
// char 변수 2개를 만들고 문자 2개를 입력받아주세요
// 그리고 그 문자를 **가르키는** 포인터 2개를 만들어주세요
// 포인터만을 이용하여 두개의 char변수를 SWAP 하고 출력 해 주세요
// 입력 예시: D A
// 출력 예시: A D

int main()
{

	char a, b;

	std::cin >> a >> b;

	char* pA = &a;
	char* pB = &b;

	std::cout << *pA << " " << *pB << std::endl;

	char temp = *pA;
	*pA = *pB;
	*pB = temp;

	std::cout << *pA << " " << *pB << std::endl;

	return 0;
}