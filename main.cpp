#include <iostream>

// 💡 **문제 9번**
// **숫자 2개 입력 받고, 합과 곱을** 구하세요.
// 그리고 **합이 10보다 크면** **"합만세"** 출력
// 그리고 **곱이 10보다 크면 "곱만세"** 출력
// ## 입력 예시
// 3 6
// ## 출력 예시
// 곱만세

int main()
{
	int a, b;
	
	std::cin >> a >> b;

	if(a + b > 10)
		std::cout << "합만세" << std::endl;
	if(a * b > 10)
		std::cout << "곱만세" << std::endl;

	return 0;
}