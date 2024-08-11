#include <iostream>

// [2024-08-11]
 // 문제 4번
 // 숫자 2개를 입력 받으세요
 // 첫번째 숫자가 7이고 두번째 숫자가 9이면 "**인증됨**" 출력
 // 그렇지 않으면 "**재시도**"를 출력 해 주세요

int main()
{
	int first, second;

	std::cin >> first >> second;

	if(first == 7 && second == 9)
	{
		std::cout << "**인증됨**" << std::endl;
		return 0;
	}
	
	std::cout << "**재시도**" << std::endl;
	return 0;
}