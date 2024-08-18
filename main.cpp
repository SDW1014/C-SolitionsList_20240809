#include <iostream>

// [2024-08-19]
// 제목 : LV14 - 연습문제

// 문제 12번
// 1. 세 개의 문자열을 하드코딩하여 배열에 저장한다.
// 2. 사용자로부터 두 개의 숫자 a와 b를 입력받는다.
// 3. a부터 b까지의 인덱스에 해당하는 문자들을 출력한다.
// 4. 2중 for문을 사용하여 각 문자열에서 해당 인덱스의 문자를 추출한다.


int main()
{
	char strings[3][6] = {"POTIO", "ABCDE", "YOUR"};

	int a, b;
	std::cin >> a >> b;

	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	for(int i = 0 ; i < 3; ++i)
		for(int j = a; j <= b; ++j)
			std::cout << strings[i][j];

	return 0;
}