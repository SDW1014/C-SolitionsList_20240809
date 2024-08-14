#include <iostream>

// [2024-08-15]
// 문제 2번
// 소문자 하나를 입력 받아서 그 소문자부터 a까지 거꾸로 출력하는 프로그램
// 입력: 소문자 하나
// 출력: 입력한 소문자부터 a까지의 알파벳을 거꾸로 출력
// 예시: g를 입력 받으면 gfedcba 출력

int main()
{
	char input;
	std::cin >> input;

	for(int i = input; i >= 'a'; --i)
		std::cout << static_cast<char>(i) << " ";
	std::cout << std::endl;

	return 0;
}