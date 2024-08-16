#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 연습 문제 

// 문제 10번
// 1. 5개의 문자를 입력받기 위한 배열을 선언합니다.
// 2. 사용자로부터 5개의 문자를 입력받기 위해 std::cin을 사용합니다.
// 3. for문을 사용하여 배열을 탐색합니다.
// 4. 각 문자를 checkChar 함수에 전달합니다.
// 5. checkChar 함수는 대문자와 소문자를 구분하여 출력합니다.
// 6. 대문자일 경우 "대"를 출력하고, 소문자일 경우 "소"를 출력합니다.
// 7. checkChar 함수는 char 타입의 인자를 받아야 합니다.
// 8. isupper()와 islower() 함수를 사용하여 문자의 대소문자를 확인합니다.

char characters[5] = {0};

void checkChar(char c) {
	if (isupper(c))
		std::cout << "대";
	else if (islower(c))
		std::cout << "소";
}

int main()
{
	std::cout << "5개의 문자를 입력하세요: ";
	for (int i = 0; i < 5; ++i) 
		std::cin >> characters[i];

	for(int i = 0; i < 5; ++i)
		checkChar(characters[i]);

	return 0;
}