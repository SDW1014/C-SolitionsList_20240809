#include <iostream>

// [2024-08-18]
// 제목 : LV12

// 1. 문자열
// 문자 : 글자 한 글자 를 뜻하는 의미다. ('A', 'B', 'C')
// 문자열 : 문자들의 집합을 뜻하는 의미다. ("ABC", "DEF", "GHI")
// char str[5] : 는 4개의 글자 까지만 저장 할 수 있고 마지막에는 NULL 문자('\0')가 자동으로 추가된다.

// 1.2 : 2차원 배열을 사용해 여러문장을 사용 하는 예
int main()
{
	// 2차원 배열 선언
	char str2D[3][5] = 
	{
		"ABC",
		"DEF",
		"HIJ"
	};

	// 2차원 배열 출력
	for(int i = 0; i < 3; ++i)
		std::cout << str2D[i] << std::endl;

	// 한글자씩 출력
	for(int i = 0; i < 3; ++i)
		for(int j = 0; j < 5; ++j)
			std::cout << str2D[i][j] << std::endl;

	// 문장을 입력
	std::cout << "문장을 입력하세요 : ";
	std::cin >> str2D[0];

	// 주소값 출력
	std::cout << str2D << std::endl;

	return 0;
}