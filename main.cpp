#include <iostream>

// [2024-08-15]
// 문제 1번
// 문자 2개를 입력 받으세요.
// 그리고 입력받은 문자와 ASCII값을 출력 해 주세요.
// 1. ex) 만약 A, D를 입력받았다면 아래와 같이 출력 해 주세요
// 문자'A'의 아스키코드값은 65
// 문자'D'의 아스키코드값은 68
// ## 입력 예시
// A 3
// ## 출력 예시
// 문자'A'의 아스키코드값은 65
// 문자'3'의 아스키코드값은 51

int main()
{
	char a, b;
	std::cin >> a >> b;

	std::cout << "문자" << a << "의 아스키코드값은 " << static_cast<int>(a) << std::endl;
	std::cout << "문자" << b << "의 아스키코드값은 " << static_cast<int>(b) << std::endl;

	return 0;
}