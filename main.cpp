#include <iostream>

// [2024-08-11]
// 문제 13번
// 숫자 3개를 입력 받아주세요. 
// 만약 숫자 3개의 합이 10보다 크면, 숫자 3개를 곱한 숫자를 출력 해 주세요. 
// 그렇지 않으면 0을 출력 해 주세요. 
// 예시: 1 2 10 을 입력받으면 숫자 합은 13이니까, 3개 숫자의 곱인 20을 출력하시면 됩니다.


int main()
{
	int a, b, c;

	std::cin >> a >> b >> c;

	if(a + b + c > 10)
	{
		std::cout << a*b*c << std::endl;
		return 0;
	}
	
	std::cout << "0" << std::endl;
	return 0;
}