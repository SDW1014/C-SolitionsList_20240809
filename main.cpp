#include <iostream>

// [2024-08-15]
// 문제 7번
// 대문자 또는 소문자 2개를 입력 받으세요.
// 만약 대문자가 입력되면 소문자로 바꾸고,
// 만약 소문자가 입력되면 대문자로 바꾸는 프로그램을 만들어 주세요.
// 입력 예시: T R
// 출력 예시: t r

int main()
{
	char input[2] = {0};
	std::cin >> input[0] >> input[1];

	if(input[0] >= 'A' && input[0] <= 'Z')
		std::cout << static_cast<char>(input[0] + 32) << " ";
	else
		std::cout << static_cast<char>(input[0] - 32) << " ";

	if(input[1] >= 'A' && input[1] <= 'Z')
		std::cout << static_cast<char>(input[1] + 32) << std::endl;
	else
		std::cout << static_cast<char>(input[1] - 32) << std::endl;

	return 0;
}