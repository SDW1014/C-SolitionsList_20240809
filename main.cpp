#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 연습 문제 

// 문제 8번
// 1. main 함수에서 두 개의 숫자를 입력 받는다.
// 2. 입력 받은 숫자를 BBQ 함수에 전달한다.
// 3. BBQ 함수에서는 두 숫자의 합, 차, 곱, 몫을 계산한다.
// 4. 계산된 결과를 출력한다.
// 5. 입력 예시: 6 3
// 6. 출력 예시: 
//    합:9
//    차:3
//    곱:18
//    몫:2

void BBQ(int a, int b) {
	std::cout << "합:" << (a + b) << std::endl;
	std::cout << "차:" << (a - b) << std::endl;
	std::cout << "곱:" << (a * b) << std::endl;
	std::cout << "몫:" << (a / b) << std::endl;
}

int main()
{
	int a, b;
	std::cin >> a >> b;

	BBQ(a, b);

	return 0;
}