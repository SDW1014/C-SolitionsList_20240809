#include <iostream>

// [2024-08-17]
// 제목 : LV11 - 연습문제

// 문제 8번
// "StructPointer"라는 문자열을 배열에 하드코딩하고, 사용자로부터 문자를 입력받아 해당 문자가 배열에 존재하는지 확인합니다.
// 존재하면 "발견"을 출력하고, 존재하지 않으면 "미발견"을 출력합니다.
// 
// 1. 문자열 배열을 하드코딩합니다.
// 2. 사용자로부터 문자를 입력받습니다.
// 3. 입력받은 문자가 배열에 존재하는지 확인합니다.
// 4. 존재하면 "발견"을 출력하고, 존재하지 않으면 "미발견"을 출력합니다.

int main()
{
	char str[] = "StructPointer";
	char inputChar;

	std::cout << "문자를 입력하세요: ";
	std::cin >> inputChar;

	for (char c : str)
	{
		if (c == inputChar)
		{
			std::cout << "발견" << std::endl;
			return 0;
		}
	}

	std::cout << "미발견" << std::endl;

	return 0;
}