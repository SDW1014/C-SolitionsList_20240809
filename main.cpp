#include <iostream>

// [2024-08-19]
// 제목 : LV14 - 연습문제

// 문제 3번
// 1. 사용자로부터 문자 1개를 입력받는다.
// 2. 입력받은 문자부터 순차적으로 배열에 값을 채운다.
// 3. 이중 while문을 사용하여 배열을 채운다.
// 4. 빈 공간은 빈칸으로 출력한다.
// 5. NULL문자는 출력하지 않는다.

int main()
{
	char ch;
	std::cin >> ch;

	char startChar = static_cast<char>(ch + 5);

	char array[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 3-i-1; j >= 0; j--)
		{
			array[i][j] = static_cast<char>(startChar);
			startChar--;
		}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			if (array[i][j] >= 'A' && array[i][j] <= 'Z')
				std::cout << array[i][j] << " ";
		std::cout << std::endl;
	}

	return 0;
}