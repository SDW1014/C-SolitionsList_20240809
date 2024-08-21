#include <iostream>

// [2024-08-21]
// 제목 : LV15 - 연습문제

// 문제 5번
// 1000 ~ 9999 사이의 숫자를 입력받아 각 자리 숫자를 출력하는 프로그램
// 1. 사용자로부터 1000 ~ 9999 사이의 정수를 입력받는다.
// 2. 입력받은 숫자를 4개의 변수에 각 자리 숫자로 나눈다.
// 3. 각 자리 숫자를 출력한다.
// 4. MOD 연산자를 활용하여 각 자리 숫자를 구한다.
// 5. 입력 예시: 5127 -> 출력 예시: 숫자5, 숫자1, 숫자2, 숫자7

int main()
{
	int inputNumber = 0;
	std::cout << "숫자를 입력하세요 (1000 ~ 9999): ";
	std::cin >> inputNumber;

	if (inputNumber < 1000 || inputNumber > 9999)
	{
		std::cout << "잘못된 입력입니다. 1000 ~ 9999 사이의 숫자를 입력하세요." << std::endl;
		return 1;
	}

	char number[4];
	number[0] = inputNumber / 1000;
	number[1] = (inputNumber / 100) % 10;
	number[2] = (inputNumber / 10) % 10;
	number[3] = inputNumber % 10;

	std::cout << "숫자" << static_cast<char>(number[0] + '0') << std::endl;
	std::cout << "숫자" << static_cast<char>(number[1] + '0') << std::endl;
	std::cout << "숫자" << static_cast<char>(number[2] + '0') << std::endl;
	std::cout << "숫자" << static_cast<char>(number[3] + '0') << std::endl;

	return 0;
}