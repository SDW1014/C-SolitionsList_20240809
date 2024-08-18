#include <iostream>

// [2024-08-18]
// 제목 : LV13 - 연습문제

// 문제 8번
// 구조체를 정의합니다.
// 구조체는 name(문자 배열), age(정수), weight(정수)를 포함합니다.
// 구조체 변수 int1과 int2를 선언합니다.
// 이 구조체 변수에 사용자로부터 입력을 받아 평균을 계산하고 출력하는 기능을 구현해야 합니다.

struct PROFILE
{
	char name[100];
	int age;
	int weight;
};

int main()
{
	PROFILE people[2];

	for (int i = 0; i < 2; i++)
	{
		std::cout << "이름을 입력하세요: ";
		std::cin >> people[i].name;
		std::cout << "나이를 입력하세요: ";
		std::cin >> people[i].age;
		std::cout << "몸무게를 입력하세요: ";
		std::cin >> people[i].weight;
	}

	std::cout << "이름 : ";
	for (int i = 0; i < 2; i++)
	{
		std::cout << people[i].name << " ";
		if (i < 1)
			std::cout << "& ";
	}
	std::cout << std::endl;

	std::cout << "나이 평균 : " << (people[0].age + people[1].age) / 2 << "세" << std::endl;
	std::cout << "몸무게 평균 : " << (people[0].weight + people[1].weight) / 2 << "kg" << std::endl;

	return 0;
}