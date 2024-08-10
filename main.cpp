#include <iostream>

// 문제 3번
// 숫자 3개를 입력 받으세요
// 그리고 아래와 같이 출력 해 주세요
// ## 입력 예시
// 3 6 9
// ## 출력 예시
// 첫번째 숫자는 3 입니다.
// 두번째 숫자는 6 입니다.
// 세번째 숫자는 9 입니다.

int main()
{
	int a, b, c;

	std::cin >> a >> b >> c;

	std::cout << "첫번째 숫자는 " << a << " 입니다." << std::endl;
	std::cout << "두번째 숫자는 " << b << " 입니다." << std::endl;
	std::cout << "세번째 숫자는 " << c << " 입니다." << std::endl;

	return 0;
}