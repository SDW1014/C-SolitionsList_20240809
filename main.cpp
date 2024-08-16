#include <iostream>

// [2024-08-16]
// 제목 : 연습문제

// 문제 3번
// 1. input 함수와 output 함수를 만들어야 한다.
// 2. input 함수에서는 두 개의 숫자를 전역 변수에 입력받는다.
// 3. output 함수에서는 5부터 입력받은 두 수의 합까지 while문을 사용하여 출력한다.
// 4. 입력 예시: 3 4
// 5. 출력 예시: 5 6 7

int a, b;

void input()
{
	std::cin >> a >> b;
}
void output()
{
	int index = 5;
	while(index <= a + b)
	{
		std::cout << index << " ";
		index++;
	}
}
int main()
{
	input();
	output();

	return 0;
}