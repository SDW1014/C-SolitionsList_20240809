#include <iostream>

// [2024-08-17]
// 제목 : LV10 - 연습문제

// 문제 10번
// yesOrNo 함수 정의: 숫자를 입력받아 3으로 나눈 나머지에 따라 값을 리턴
// 이 함수는 사용자가 입력한 숫자를 3으로 나누고, 나머지에 따라 다음 값을 리턴합니다:
// - 나머지가 0일 경우: 7을 리턴
// - 나머지가 1일 경우: 35를 리턴
// - 나머지가 2일 경우: 50을 리턴
// main 함수에서는 yesOrNo 함수를 호출하고 그 결과를 출력해야 합니다.

int yesOrNo() {
    int number;
    std::cout << "숫자를 입력하세요: ";
    std::cin >> number;

	switch (number % 3) {
		case 0:
			return 7;
		case 1:
			return 35;
		case 2:
			return 50;
	}
}

int main()
{
	std::cout << yesOrNo() << std::endl;

	return 0;
}