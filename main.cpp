#include <iostream>

// [2024-08-12]
// 제목 : 숫자 두 개를 입력 받으세요
// 곱이 30 ~ 50 사이면 "적당한 사이즈" 출력
// 곱이 50 이상이면 "큰 사이즈" 출력
// 곱이 30 이하이면 "작은 사이즈" 출력

int main()
{
	int a, b;

	std::cin >> a >> b;

	int mulab = a * b;

	if(mulab > 30 && mulab < 50)
		std::cout << "적당한 사이즈" << std::endl;
	else if(mulab >= 50)
		std::cout << "큰 사이즈" << std::endl;
	else
		std::cout << "작은 사이즈" << std::endl;

	return 0;
}