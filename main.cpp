#include <iostream>

// [2024-08-15]
// 문제 10번
// 소문자를 입력받아 대문자로 변환하는 프로그램
// 입력받은 소문자를 대문자로 바꾸어 출력합니다.
// 예를 들어, 'b'를 입력받으면 'B'가 출력됩니다.
// 아스키 코드 규칙을 이용하여 변환할 수 있습니다.

int main()
{
	char input;
	std::cin >> input;

	if(input >= 'a' && input <= 'z')
		std::cout << static_cast<char>(input - 32);

	return 0;
}