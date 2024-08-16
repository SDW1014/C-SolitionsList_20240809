#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 복습문제

// 문제 8번 분석:
// 1. 숫자를 하나 입력 받는다.
// 2. 입력 받은 숫자가 홀수인지 짝수인지 판단한다.
// 3. 홀수일 경우:
//    - 추가로 숫자를 하나 입력 받고, BBQ 함수에 전달한다.
//    - BBQ 함수는 1부터 전달받은 숫자까지 출력한다.
// 4. 짝수일 경우:
//    - 추가로 문자를 하나 입력 받고, KFC 함수에 전달한다.
//    - KFC 함수는 전달받은 문자를 7회 반복해서 출력한다.

void BBQ(int num)
{
	for(int i = 1; i <= num; i++)
		std::cout << i << " ";
}

void KFC(char ch)
{
	for(int i = 0; i < 7; i++)
		std::cout << ch;
}

int main()
{
	int num;
	std::cout << "숫자를 입력하세요: ";
	std::cin >> num;

	if(num % 2 == 1)
	{
		int num2;
		std::cin >> num2;
		BBQ(num2);
	}
	else
	{
		char ch;
		std::cin >> ch;
		KFC(ch);
	}

	return 0;
}