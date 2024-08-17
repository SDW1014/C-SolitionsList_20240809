#include <iostream>

// [2024-08-17]
// 제목 : LV10 - 연습문제

// 문제 9번
// 전역변수를 사용하지 않고, 입력받은 숫자부터 1까지 출력하는 문제입니다.
// 이를 위해서는 다음과 같은 함수가 필요합니다:
// 1. 사용자로부터 숫자를 입력받는 함수
// 2. 입력받은 숫자부터 1까지 출력하는 함수
// 3. 메인 함수에서 위의 두 함수를 호출하여 프로그램을 실행합니다.
// 전역변수를 사용하지 않기 때문에, 모든 변수는 함수 내부에서 선언되어야 합니다.

int Input()
{
	int num;
	std::cout << "숫자를 입력하세요: ";
	std::cin >> num;
	return num;
}

void CountDown(int num)
{
	for(int i = num; i >= 1; --i)
		std::cout << i << " ";
}

int main()
{
	CountDown(Input());
	return 0;
}