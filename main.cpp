#include <iostream>

// [2024-08-16]
// 제목 : 연습문제

// 문제 11번 분석
// 1. 커피 가격을 입력받는다.
// 2. 입력된 가격이 3500 이상 5000 이하일 경우 starBox() 함수를 호출한다.
// 3. 입력된 가격이 2500 이상 3500 미만일 경우 macDoll() 함수를 호출한다.
// 4. 위 조건에 해당하지 않으면 copyBean() 함수를 호출한다.
//
// 각 함수의 역할:
// - starBox() : 1부터 20 사이의 홀수를 출력하는 함수 (for문 사용)
// - macDoll() : H부터 A까지 거꾸로 출력하는 함수 (for문 사용)
// - copyBean() : -5부터 5까지 숫자를 출력하는 함수 (for문 사용)

void starBox()
{
	for(int i = 1; i <= 20; ++i)
		std::cout << i << " ";
}

void macDoll()
{
	for(char i = 'H'; i >= 'A'; --i)
		std::cout << static_cast<char>(i) << " ";
}

void copyBean()
{
	for(int i = -5; i <= 5; ++i)
		std::cout << i << " ";
}

int main()
{
	int price;
	std::cin >> price;

	if(price >= 3500 && price <= 5000)
		starBox();
	else if(price >= 2500 && price < 3500)
		macDoll();
	else
		copyBean();

	return 0;
}