#include <iostream>

// [2024-08-16]
// 제목 : LV8 - 복습 문제

// 문제 9번
// 1. 두 개의 문자를 입력받는다.
// 2. 2차원 배열에 입력받은 문자로 채운다.
// 3. for문을 사용하여 전체 배열을 출력한다.
// 4. 예시: A G를 입력받으면 2차원 배열은 다음과 같다:
//    | A | A | A | A | G | G |
//    | A | A | A | A | G | G |
//    | A | A | A | A | G | G |


int main()
{
	char arr[3][6] = {0};
	char a, b;

	std::cout << "두 개의 문자를 입력하세요: ";
	std::cin >> a >> b;
	
	for(int i = 0; i < 3; ++i)
		for(int j = 0; j < 6; ++j)
		{
			if(j <= 3)
				arr[i][j] = a;
			else
				arr[i][j] = b;
		}

	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 6; ++j)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}
	return 0;
}