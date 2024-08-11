#include <iostream>

// [2024-08-11]
// 문제 3번
// 숫자 하나를 입력 받으세요
// 만약 그 숫자가 5 이거나 10이면 "**만세**" 출력
// 그렇지 않으면 "**재도전**" 출력

int main()
{
	int a; 
	
	std::cin >> a;

	if(a == 5 || a == 10)
	{
		std::cout << "**만세**" << std::endl;
		return 0;
	}
	
	std::cout << "**재도전**" << std::endl;
	return 0;
}