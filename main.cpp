#include <iostream>

// [2024-08-15]
// 문제 10번
// 문자 1개를 입력받고
// input함수에서  4 x 4 배열에 입력받은 문자를 꽉 채워주세요
// output함수에서 4 x 4 배열값을 출력 해 주세요
// 1. ex) 만약 t를 입력받았다면 이렇게 채우고 출력하시면 됩니다.
// | t | t | t | t |
// |---|---|---|---|
// | t | t | t | t |
// | t | t | t | t |
// | t | t | t | t |

// ## 입력 예시
// a

// ## 출력 예시
// aaaa
// aaaa
// aaaa
// aaaa

int main()
{
	char input;
	std::cin >> input;

	char arr[4][4] = {};

	for(int i = 0; i < 4; ++i)
		for(int j = 0; j < 4; ++j)
			arr[i][j] = input;

	for(int i = 0; i < 4; ++i)
	{
		for(int j = 0; j < 4; ++j)
			std::cout << arr[i][j];
		std::cout << std::endl;
	}

	return 0;
}