#include <iostream>

// [2024-08-11]
// 문제 10번
// 숫자 1개를 입력 받으세요
// 그 숫자에 2를 곱하고, 20을 더하고, 다시 5로 나눈 값이 100과 **같지 않으면 (!=)**
// "**Magic**"이라는 글씨를 출력 하세요.


int main()
{
	int a; 
	
	std::cin >> a;

	a = ((a*2) + 20)/5;

	if(a != 100)
		std::cout << "**Magic**" << std::endl;

	return 0;
}