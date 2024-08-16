#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 연습 문제 

// 문제 2번
// 아래 문자배열을 하드코딩
// | A | B | C | D | E |
// | E | A | B | A | B |
// | A | C | D | E | R |
// 문자 하나를 입력받으세요
// 입력받은 문자가 2차 배열에 3개이상 (>=3) 존재할 경우에는 "**대발견**" 출력
// 입력받은 문자가 2차 배열에 1~2개 존재하는 경우 "**발견**" 출력
// 0개라면 "**미발견**" 출력


int main()
{
	char arr[3][5] = 
	{ 
		{'A', 'B', 'C', 'D', 'E'}, 
		{'E', 'A', 'B', 'A', 'B'}, 
		{'A', 'C', 'D', 'E', 'R'} 
	};

	char inputChar;
	std::cout << "문자를 입력하세요: ";
	std::cin >> inputChar;

	int count = 0;
	for(int i = 0; i < 3; ++i)
		for(int j = 0; j < 5; ++j)
		{
			if(arr[i][j] == inputChar)
				++count;
		}

	if(count >= 3)
		std::cout << "대발견" << std::endl;
	else if(count >= 1 && count <= 2)
		std::cout << "발견" << std::endl;
	else
		std::cout << "미발견" << std::endl;

	return 0;
}