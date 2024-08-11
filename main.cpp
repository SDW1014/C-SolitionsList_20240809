#include <iostream>

// [2024-08-11]
 // Start of Selection
 // 제목 : 두 숫자 중 큰 숫자를 찾는 프로그램
 // 사용자로부터 두 개의 숫자를 입력받고 큰 숫자를 출력합니다.
 // 만약 두 숫자가 같으면 "같은 숫자"를 출력합니다.

int main()
{
	int a, b;
	
	std::cin >> a >> b;

	if(a > b)
	{
		std::cout << "큰 수는 : " << a << std::endl;
		return 0;
	}
	
	std::cout << "큰 수는 : " << b << std::endl;
	return 0;
}