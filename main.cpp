#include <iostream>

// [2024-08-18]
// 제목 : LV13 - 연습문제

// 문제 6번 
// 1. 2차원 배열을 하드코딩합니다. 
// 2. 사용자로부터 0~9 사이의 숫자를 입력받습니다.
// 3. 입력받은 숫자의 위치를 찾고 해당 위치의 알파벳을 출력하는 로직을 작성합니다.

int main()
{
	char arr[2][6] = {
		{'4', '5', '7', '1', '3', '2'},
		{'D', 'F', 'Q', 'W', 'G', 'Z'}
	};

	int input;
	std::cin >> input;

	for (int i = 0; i < 6; i++)
		if (arr[0][i] - '0' == input)
		{
			std::cout << arr[1][i] << std::endl;
			break;
		}

	return 0;
}