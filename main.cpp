#include <iostream>

// [2024-08-17]
// 제목 : LV10 - 연습문제

// 문제 3번
// 1. 사용자로부터 숫자 1개를 입력받는다.
// 2. 입력받은 숫자를 5로 나누었을 때 나머지를 확인한다.
// 3. 나머지가 1인 경우:
//    - 2차원 배열에 다음과 같은 값을 채운다:
//      | 9 | 6 | 3 |
//      | 8 | 5 | 2 |
//      | 7 | 4 | 1 |
// 4. 나머지가 2인 경우:
//    - 2차원 배열에 다음과 같은 값을 채운다:
//      | 7 | 8 | 9 |
//      | 4 | 5 | 6 |
//      | 1 | 2 | 3 |
// 5. 나머지가 1이나 2가 아닌 경우:
//    - 2차원 배열에 다음과 같은 값을 채운다:
//      | 10 | 13 | 16 |
//      | 11 | 14 | 17 |
//      | 12 | 15 | 18 |
// 6. 채운 2차원 배열을 출력한다.


int main()
{
	int arr[3][3] = {0};
	int num; 
	std::cout << "숫자를 입력하세요.";
	std::cin >> num;

	switch(num % 5)
	{
		case 1:
			for(size_t i = 0; i < 3; ++i)
				for(size_t j = 0; j < 3; ++j)
					arr[i][j] = 9 - i - (j * 3);
			break;
		case 2:
			for(size_t i = 0; i < 3; ++i)
				for(size_t j = 0; j < 3; ++j)
					arr[i][j] = 7 - (i * 3) + j;
			break;
		default:
			for(size_t i = 0; i < 3; ++i)
				for(size_t j = 0; j < 3; ++j)
					arr[i][j] = 10 + i + (j * 3);
	}

	for(size_t i = 0; i < 3; ++i)
	{
		for(size_t j = 0; j < 3; ++j)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}

	return 0;
}