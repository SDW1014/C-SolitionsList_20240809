#include <iostream>

// [2024-08-18]
// 제목 : LV13 - 연습문제

// 문제 1번
// main 함수에서 두 개의 숫자를 입력받고, ABC 함수에 전달하여 합과 곱을 계산해야 합니다.
// ABC 함수는 두 개의 값을 받아서 합과 곱을 전역 변수 또는 포인터를 통해 반환해야 합니다.

void ABC(int a, int b, int &sum, int &product)
{
	sum = a + b;
	product = a * b;
}

int main()
{
	int a, b;
	std::cin >> a >> b;

	int sum;
	int product;

	ABC(a, b, sum, product);

	std::cout << "합: " << sum << ", 곱: " << product << std::endl;
	
	return 0;
}