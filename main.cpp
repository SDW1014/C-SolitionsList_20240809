#include <iostream>

// [2024-08-17]
// 제목 : LV10 - 연습문제

// 문제 12번
// - main 함수에서 aToZ 함수를 호출해야 함.
// - aToZ 함수는 하나의 문자를 입력받아야 함.
// - 입력받은 문자가 A에 가까우면 A를 리턴하고, Z에 가까우면 Z를 리턴해야 함.
// - main 함수에서는 aToZ 함수의 리턴 값을 출력해야 함.
// - 입력 예시: M -> A, X -> Z, F -> A

char aToZ(char input)
{
	return (input <= 'M') ? 'A' : 'Z';
}

int main()
{
	char input;
	std::cout << "문자를 입력하세요: ";
	std::cin >> input;
	std::cout << aToZ(input) << std::endl;

	return 0;
}