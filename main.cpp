#include <iostream>

// [2024-08-15]
// 문제 8번
// char input; 변수를 만들고, 문자 하나를 입력 받아주세요.
// 만약 0~9 사이의 문자를 입력 받았다면, 입력 받은 문자를 숫자로 바꾼 후, 5를 더한 값을 출력 해 주세요.
// [힌트] 입력 받은 문자를 숫자로 바꾸는 방법: char input = '3'; int t = input - '0';
// input변수에는 아스키코드값 51이 저장되어 있습니다. (51은 문자'3'의 아스키코드값)
// 여기서 문자'0'의 아스키코드값인 48을 빼면 51 - 48 = 3
// 따라서 변수 t에는 숫자 3이 저장 됩니다.

int main()
{
	char input;
	std::cin >> input;

	if(input >= '0' && input <= '9')
		std::cout << input - '0' + 5 << std::endl;

	return 0;
}