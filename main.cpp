#include <iostream>

 // 문제 8번
 // 숫자 2개를 입력 받고, 둘 중 큰수를 4번 출력 해주세요.
 // ex)
 // [입력] : 3 5
 // [출력] : 5555

void printContinue4(int num)
{
	for(int i = 0; i < 5; ++i)
		std::cout << num;
}

int main()
{
	int a, b;
	
	std::cin >> a >> b;

	if(a > b)
		printContinue4(a);
	else
		printContinue4(b);

	return 0;
}