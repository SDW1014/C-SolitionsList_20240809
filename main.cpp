#include <iostream>

// [2024-08-18]
// 제목 : LV10 - 복습문제

// 문제 3번 
// 1. Fruit 구조체 타입을 정의해야 함.
// 2. Fruit 구조체 변수 banana와 apple을 생성해야 함.
// 3. 사용자로부터 banana.size와 apple.size를 입력받아야 함.
// 4. 바나나 가격은 banana.size * 250으로 계산해야 함.
// 5. 사과 가격은 apple.size * 500으로 계산해야 함.
// 6. banana.price와 apple.price의 합을 출력해야 함.

struct Fruit {
    int size;
    int price;
};

int main()
{
	Fruit banana;
	Fruit apple;

	std::cout << "바나나의 크기를 입력하세요: ";
	std::cin >> banana.size;
	std::cout << "사과의 크기를 입력하세요: ";
	std::cin >> apple.size;

	banana.price = banana.size * 250;
	apple.price = apple.size * 500;

	int totalPrice = banana.price + apple.price;
	std::cout << totalPrice << "원" << std::endl;

	return 0;
}