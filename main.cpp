#include <iostream>

/*
💡 **문제 10번**

숫자 7개를 입력받고, 마지막 4개를 출력하는 프로그램을 작성하세요.

[힌트]
띄어쓰기 출력 방법: 
cout << a << " " << b << " " << c;

## 입력 예시
7 6 5 4 3 2 1

## 출력 예시
4 3 2 1
*/

int main()
{
	int numbers[7];

	for(int i = 0 ; i < 7; ++i)
		std::cin >> numbers[i];

	for(int i = 3; i < 7; ++i)
		std::cout << numbers[i] << " ";
	std::cout << std::endl;

	return 0;
}