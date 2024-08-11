#include <iostream>

// [2024-08-12]
// 문제 4번: 숫자 하나를 입력 받아주세요.
// 아래의 규칙을 보고 for문을 사용해 값을 출력 해주세요.
// ex1) 입력: 3 -> 출력: 5 6 7
// ex2) 입력: 5 -> 출력: 7 8 9
// ex3) 입력: 9 -> 출력: 11 12 13

int main()
{
	int a; 

	std::cin >> a;

	for(int i = 0; i < 3; ++i)
		std::cout << a + i + 2 << " ";
	std::cout << std::endl;

	return 0;
}