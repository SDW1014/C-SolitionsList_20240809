#include <iostream>

// [2024-08-18]
// 제목 : LV10 - 복습문제

// 문제 6번 
// BBQ라는 구조체 타입을 정의합니다.
// 구조체는 숫자 4개를 저장할 수 있는 배열과 x값을 저장할 수 있는 변수를 포함합니다.
// 구조체 변수 g를 선언합니다.
// 사용자로부터 숫자 4개를 입력받는 부분을 작성합니다.
// 입력받은 숫자는 g.data 배열에 순서대로 저장됩니다.
// g.data 배열의 합계를 계산하기 위해 for문을 사용합니다.
// 합계는 sum 변수에 저장됩니다.
// g.x에는 g.data 배열의 첫 번째 값을 저장합니다.
// 마지막으로, 합계와 g.x 값을 출력합니다.

struct BBQ
{
	int x;
	int data[3];
};

int main()
{
	BBQ g;
	std::cin >> g.x >> g.data[0] >> g.data[1] >> g.data[2];

	int sum = 0;
	for(int i = 0; i < 3; ++i)
		sum += g.data[i];
	std::cout << sum << " " << g.x << std::endl;

	return 0;
}