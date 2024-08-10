#include <iostream>

//숫자 하나를 입력받고 출력하세요
//입력받은 숫자를 그대로 출력 하고, 뒤에 "입력하셨군요"라는 글씨를 붙여서 출력하시면 됩니다.

int main()
{
	int input;
	
	std::cout << "수를 입력하십시오 : ";
	std::cin >> input;

	std::cout << "당신은 수를 입력하셨습니다." << std::endl;

	return 0;
}