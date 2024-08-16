#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 연습 문제 

// 문제 11번
// Person이라는 구조체를 정의해야 함
// 이 구조체는 두 개의 정수형 변수 age와 height를 포함해야 함

// Person 구조체 변수 a와 b를 선언해야 함
// Input 함수에서 4개의 숫자를 입력받아 a와 b의 age와 height에 저장해야 함

// Output 함수에서 a와 b의 age와 height의 평균을 계산하여 출력해야 함
// 평균은 정수로 계산되며 소수점은 버려져야 함

// 이 주석을 바탕으로 코드를 작성해야 함

struct Person
{
	int age;
	int height;
};

Person a, b;

void Input()
{
	std::cin >> a.age >> a.height >> b.age >> b.height;
}

void Output()
{
	std::cout << "평균 나이: " << (a.age + b.age) / 2 << std::endl;
	std::cout << "평균 키: " << (a.height + b.height) / 2 << std::endl;
}

int main()
{
	Input();
	Output();

	return 0;
}