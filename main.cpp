#include <iostream>

// [2024-08-15]
// 문제 1번
// ABC 함수에서 문자 2개를 입력받고, OUTPUT 함수에서 입력 받은 문자 2개를 출력하세요.
// main 함수에서는 ABC 함수와 OUTPUT 함수를 호출합니다.
// 입력 예시: A 1
// 출력 예시: A 1

void OUTPUT(char a, char b)
{
	std::cout << a << " " << b << std::endl;
}
int main()
{
	char a, b;
	std::cin >> a >> b;

	OUTPUT(a, b);

	return 0;
}