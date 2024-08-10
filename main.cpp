#include <iostream>

//숫자를 하나만 입력 받아주세요.
//그 숫자를 세번 출력 해 주시면 됩니다.
//[참고]
// cin과 cout만 이용해서 풀어주세요.

int main()
{
	int input;
	std::cout << "숫자를 입력하십시오 : ";
	std::cin >> input;

	std::cout << input << " " << input << " " << input << std::endl;

	return 0;
}