#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 연습 문제 

// 문제 분석:
// 1. 2x3 배열을 전역으로 선언하고 하드 코딩해야 함. {F E W D C A}
// 2. main 함수에서 사용자로부터 문자 하나를 입력받아야 함.
// 3. 입력받은 문자를 findCh 함수로 전달해야 함.
// 4. findCh 함수에서는 전역 배열에 입력받은 문자가 존재하는지 확인해야 함.
// 5. 존재 여부에 따라 "발견" 또는 "미발견"을 출력해야 함.

char arr[2][3] = {
		{'F', 'E', 'W'},
		{'D', 'C', 'A'}};

void findCh(char ch)
{
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(arr[i][j] == ch)
			{
				std::cout << "발견" << std::endl;
				return;
			}
		}
	}
	std::cout << "미발견" << std::endl;
}

int main()
{
	char ch;
	std::cout << "문자 하나를 입력하세요: ";
	std::cin >> ch;

	findCh(ch);

	return 0;
}