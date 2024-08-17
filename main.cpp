#include <iostream>

// [2024-08-17]
// 제목 : LV10 - 연습문제

// 문제 5번
// 이 문제는 두 개의 숫자를 입력받아 곱을 반환하는 GOP 함수와
// 두 개의 숫자를 입력받아 합을 반환하는 SUM 함수를 정의하는 것입니다.
// main 함수에서는 이 두 함수를 호출하고 그 결과를 비교하여
// 어떤 함수의 결과가 더 큰지 또는 같은지를 출력해야 합니다.
//
// GOP 함수는 두 숫자의 곱을 계산하여 반환해야 하며,
// SUM 함수는 두 숫자의 합을 계산하여 반환해야 합니다.
//
// 결과 비교는 if-else 문을 사용하여 수행하며,
// GOP의 결과가 SUM의 결과보다 크면 "GOP>SUM"을 출력하고,
// SUM의 결과가 더 크면 "GOP<SUM"을 출력하며,
// 두 결과가 같으면 "GOP==SUM"을 출력해야 합니다.
//
// 이 모든 과정은 main 함수 내에서 이루어져야 하며,
// 함수 호출과 결과 비교를 통해 최종 결과를 출력하는 구조입니다.

int GOP(int a, int b) {
    return a * b;
}

int SUM(int a, int b) {
    return a + b;
}

int main()
{
	int a, b;
	std::cout << "두 숫자를 입력하세요: ";
	std::cin >> a >> b;

	int gopResult = GOP(a, b);
	int sumResult = SUM(a, b);

	if(gopResult > sumResult)
		std::cout << "GOP>SUM";
	else if(gopResult < sumResult)
		std::cout << "GOP<SUM";
	else
		std::cout << "GOP==SUM";

	return 0;
}