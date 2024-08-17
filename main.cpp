#include <iostream>

// [2024-08-18]
// 제목 : LV11 - 복습문제

// 2차 배열을 하드코딩합니다.
// 배열의 각 요소를 출력할 때, 대문자는 소문자로, 소문자는 대문자로 바꾸고,
// 숫자는 5를 더한 값으로 출력합니다.
// 
// 예시 배열:
// | a | b | E |
// | E | 2 | W |
// | 3 | 2 | 4 |
// 
// 출력 규칙:
// - 대문자 'E'는 소문자 'e'로 변환
// - 소문자 'w'는 대문자 'W'로 변환
// - 숫자 '2'는 7로 변환 (2 + 5)
// - 숫자 '3'는 8로 변환 (3 + 5)
// - 숫자 '4'는 9로 변환 (4 + 5)
// 
// 최종 출력 예시:
// e 7 w
// 8 7 9

int main()
{
	char array[3][3] = {
		{'a', 'b', 'E'},
		{'E', '2', 'W'},
		{'3', '2', '4'}
	};

	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			if(array[i][j] >= 'a' && array[i][j] <= 'z')
				array[i][j] = static_cast<char>(array[i][j] - 32);
			else if(array[i][j] >= 'A' && array[i][j] <= 'Z')
				array[i][j] = static_cast<char>(array[i][j] + 32);
			else if(array[i][j] >= '0' && array[i][j] <= '9')
				array[i][j] = static_cast<char>(array[i][j] + 5);
		}
	}

	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
			std::cout << array[i][j] << ' ';
		std::cout << std::endl;
	}
	return 0;
}