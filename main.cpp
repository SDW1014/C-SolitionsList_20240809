#include <iostream>

// [2024-08-17]
// 제목 : LV11 - 연습문제

// 문제 2번 
// 1. sum(int a, int b) 함수는 두 숫자의 합을 반환하는 함수입니다.
// 2. comp(int a, int b) 함수는 두 숫자의 차를 반환하는 함수입니다.
// 3. print(int t1, int t2) 함수는 두 숫자를 출력하는 함수입니다.
// 4. main 함수에서는 사용자로부터 두 숫자를 입력받아야 합니다.
// 5. 입력받은 두 숫자를 sum 함수와 comp 함수에 전달하여 합과 차를 구해야 합니다.
// 6. 구한 합과 차를 print 함수에 전달하여 출력해야 합니다.
// 7. 전역변수를 사용하지 않고 모든 변수를 지역변수로 처리해야 합니다.

int sum(int a, int b)
{
	return a + b;
}

int comp(int a, int b)
{
	return a - b;
}

void print(int t1, int t2)
{
	std::cout << "합:" << t1 << std::endl;
	std::cout << "차:" << t2 << std::endl;
}

int main()
{
	int a, b;
	std::cout << "두 숫자를 입력하세요: ";
	std::cin >> a >> b;

	int total = sum(a, b);
	int difference = comp(a, b);

	print(total, difference);

	return 0;
}