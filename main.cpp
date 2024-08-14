#include <iostream>

// [2024-08-15]
// 문제 6번 
// 문자 1개를 입력 받아 대문자 또는 소문자를 구분하는 프로그램
// 대문자 판별 조건: if (g >= 'A' && g <= 'Z')
// 소문자 판별 조건: if (g >= 'a' && g <= 'z')
// 출력 예시: "대문자입니다" 또는 "소문자입니다"

int main()
{
	char g;
	std::cin >> g;

	if(g >= 'A' && g <= 'Z')
		std::cout << "대문자 입니다. " << std::endl;
	else if(g >= 'a' && g <= 'z')
		std::cout << "소문자 입니다. " << std::endl;

	return 0;
}