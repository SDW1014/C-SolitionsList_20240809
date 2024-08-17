#include <iostream>

// [2024-08-17]
// 제목 : LV10 - 연습문제

// 문제 2번 
// getChar 함수는 두 개의 문자를 입력받아 아스키 코드 값이 더 큰 문자를 반환합니다.
// main 함수에서는 getChar를 호출하고 그 결과를 출력합니다.
// 입력 예시: A E
// 출력 예시: E

char getChar()
{
	char ch1, ch2;

	std::cout << "두 개의 문자를 입력하세요: ";
	std::cin >> ch1 >> ch2;

	return (ch1 > ch2) ? ch1 : ch2;
}

int main()
{
	std::cout << "결과: " << getChar() << std::endl;

	return 0;
}