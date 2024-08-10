#include <iostream>

// 숫자 3개를 변수 a, b, c 에 입력 받기
// 세 숫자가 같으면 "만세" 출력
// 세 숫자가 같지 않으면 아무것도 출력하지 않음
// 입력 예시: 1 1 1
// 출력 예시: 만세

int main()
{
	int a, b, c;

	std::cin >> a >> b >> c;

	if(a == b && b == c)
		std::cout << "만세" << std::endl;

	return 0;
}