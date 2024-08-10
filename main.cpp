#include <iostream>

// 문제 6번
// 숫자 2개를 입력받고 덧셈, 곱셈, 나눗셈을 출력 해 주세요
// (int형 변수를 사용하시면 됩니다)

// [주의]
// 1 2를 입력했을 때, 출력결과가
// a+b=3 이 아니라, 1 + 2 = 3로 나와야 합니다.

int main() {
    int a, b;
	std::cin >> a >> b;

	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << a << " / " << b << " = " << a / b << std::endl;
	
    return 0;
}