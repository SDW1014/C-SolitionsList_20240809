#include <iostream>

// [2024-08-17]
// 제목 : LV11 - 연습문제

// 문제 4번
// 문자 변수 a, b, c를 만들고 문자 3개를 입력 받기
// char pointer형 변수 3개를 만들고 각각 문자 변수들을 가리키기
// pointer의 능력을 사용해서 각 문자의 다음 알파벳을 출력하기
// HINT: pointer를 사용하여 가리키고 있는 변수 값 원격으로 바꾸기
// HINT2: 가리키는 곳에 ++ 하는 방법 주의


int main()
{
	char a, b, c;
	std::cout << "문자 3개를 입력하세요: ";
	std::cin >> a >> b >> c;

	char *pA = &a;
	char *pB = &b;
	char *pC = &c;

	std::cout << "다음 문자는 " << *pA << "입니다." << std::endl;
	std::cout << "다음 문자는 " << *pB << "입니다." << std::endl;
	std::cout << "다음 문자는 " << *pC << "입니다." << std::endl;

	std::cout << "수를 ++해보았다." << std::endl;
	(*pA)++;
	(*pB)++;
	(*pC)++;

	std::cout << "다음 문자는 " << a << "입니다." << std::endl;
	std::cout << "다음 문자는 " << b << "입니다." << std::endl;
	std::cout << "다음 문자는 " << c << "입니다." << std::endl;
	

	return 0;
}