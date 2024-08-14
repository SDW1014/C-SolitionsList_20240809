#include <iostream>

// [2024-08-15]
// 문제 4번
// 문자 한개를 입력 받으세요. 그리고 아래 조건에 따라 출력 해 주세요
// 소문자가 입력되었으면 : 소문자입력!!
// 대문자가 입력되었으면 : 대문자입력!!
// 숫자문자가 입력되었으면 : 숫자문자입력!!
// 입력 예시: 4
// 출력 예시: 숫자문자입력!!

int main()
{
	char input;
	std::cin >> input;

	if(input >= 'a' && input <= 'z')
		std::cout << "소문자입력!!";
	else if(input >= 'A' && input <= 'Z')
		std::cout << "대문자입력!!";
	else if(input >= '0' && input <= '9')
		std::cout << "숫자문자입력!!";

	return 0;
}