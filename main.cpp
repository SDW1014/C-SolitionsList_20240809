#include <iostream>

// [2024-08-17]
// 제목 : LV10 - 연습문제

// 문제 4번
// 이 문제는 두 개의 정수 a와 b를 입력받아, a와 b의 합과 차를 출력하는 프로그램입니다.
// main 함수에서 even(value); 또는 odd(value);를 호출하여 결과를 출력해야 합니다.
// printData(value);를 호출하여 결과를 출력해야 합니다.
// even 함수는 value의 2배를 printData(value);로 출력하고, odd 함수는 value에서 10을 뺀 값을 printData(value);로 출력합니다.
// 마지막에는 a + b의 값을 printData(value);로 출력합니다.

int even(int value)
{
	return value * 2;
}

int odd(int value)
{
	return value - 10;
}

void printData(int value)
{
	std::cout << value << std::endl;
}

int main()
{
	int a, b;
	std::cout << "정수 두 개를 입력하세요: ";
	std::cin >> a >> b;

	if((a / b) % 2 == 0)
		printData(even(a / b));
	else
		printData(odd(a / b));

	printData(a + b);

	return 0;
}