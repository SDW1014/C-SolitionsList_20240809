#include <iostream>

// [2024-08-15]
// 문제 9번
// 대문자 알파벳 하나를 입력 받아 A부터 입력받은 알파벳까지 출력하는 프로그램
// 사용자가 입력한 알파벳에 따라 A부터 해당 알파벳까지의 모든 대문자를 출력합니다.
// 예를 들어, 사용자가 'H'를 입력하면 'ABCDEFGH'가 출력됩니다.
// 이 프로그램은 A부터 Z까지의 알파벳을 출력하는 기본적인 반복문을 사용합니다.

int main()
{
	char input;
	std::cin >> input;

	for(int i = 'A'; i <= input; ++i)
		std::cout << static_cast<char>(i) << " ";

	return 0;
}