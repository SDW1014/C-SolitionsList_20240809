#include <iostream>

// 문제 11번
// 숫자 1개를 변수 num에 입력 받습니다.
// 숫자가 양수라면
// ###
// ###
// ###
// 위와 같이 #을 출력하고,
// 숫자가 음수라면
// $$$
// $$$
// 위와 같이 $를 출력 해주세요.
// 숫자가 0이라면 아무것도 출력하지 않습니다.

int main()
{
	int num;
	std::cin >> num;

	char ch = '$';
	if(num > 0)
		ch = '#';

	for(int i = 0 ; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
			std::cout << ch;
		std::cout << std::endl;
	}

	return 0;
}