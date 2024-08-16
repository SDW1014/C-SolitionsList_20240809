#include <iostream>

// [2024-08-16]
// 제목 : LV8 - 복습 문제

// 문제 5번
// 1. 대문자 2개와 숫자 1개를 입력받는다.
// 2. 첫번째 대문자부터 두번째 대문자까지의 알파벳을 출력한다.
// 3. 입력받은 숫자만큼 반복해서 출력해야 한다.
// 4. 첫번째 문자와 두번째 문자는 반드시 첫번째가 두번째보다 작아야 한다.
// 5. 예시: A E 3 -> ABCDE를 3번 출력


int main()
{
	char a, b;
	int c;
	std::cin >> a >> b >> c;

	if(a > b)
	{
		char temp = a;
		a = b;
		b = temp;
	}

	for(int i = 0; i < c; ++i)
	{
		for(char j = a; j <= b; ++j)
			std::cout << static_cast<char>(j) << " ";
		std::cout << std::endl;
	}

	return 0;
}