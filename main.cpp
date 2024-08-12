#include <iostream>

// [2024-08-12]
// 문제 12번
// 
// 하드코딩된 문장
// | P | O | T | I | O | \0 |
// | A | B | C | D | E | \0 |
// | Y | O | U | R | E | \0 |
// 
// 변수 a, b에 숫자 2개를 입력받기
// 예시: 1 3
// 
// 2중 for문을 이용하여 a ~ b에 해당하는 글자를 출력
// 예시 출력: OTIBCDOUR

int main()
{
	int a, b;
	std::cin >> a >> b;

	char arr[3][7] = {"POTIOD", "ABCDE", "YOUR"};

	for(int i = 0; i < 3; ++i)
		for(int j = a; j <= b; ++j)
			std::cout << arr[i][j];


	return 0;
}