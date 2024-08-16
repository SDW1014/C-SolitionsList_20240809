#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 복습문제

// 문제 7번
// 구조체 PROJECT 정의
// PROJECT 구조체는 세 개의 변수를 포함한다: 
// 1. int num: 정수형 변수
// 2. char id: 문자형 변수
// 3. int vect[4]: 정수형 배열로, 크기는 4이다.

// PROJECT 타입의 구조체 변수 z를 선언한다.
// 사용자로부터 0보다 큰 숫자를 입력받는다.
// 입력된 숫자의 자리수에 따라 z의 값을 설정한다:
// - 한자리 수: z.num = 5, z.id = 'G', z.vect = {1, 2, 3, 4}
// - 두자리 수: z.num = 8, z.id = 'T', z.vect = {5, 1, 2, 3}
// - 세자리 수 이상: z.num = 10, z.id = 'Q', z.vect = {9, 1, 6, 2}
// 마지막으로 z의 num, id, vect 값을 출력한다.


struct PROJECT {
    int num;
    char id;
    int vect[4];
};

int main()
{
	PROJECT z;

	int number;
	std::cin >> number;

	if(number < 10) {
		z.num = 5;
		z.id = 'G';
		int temp_vect[4] = {1, 2, 3, 4};
		for(int i = 0; i < 4; i++) 
			z.vect[i] = temp_vect[i];
	}
	else if(number < 100) {
		z.num = 8;
		z.id = 'T';
		int temp_vect[4] = {5, 1, 2, 3};
		for(int i = 0; i < 4; i++) 
			z.vect[i] = temp_vect[i];
	}
	else {
		z.num = 10;
		z.id = 'Q';
		int temp_vect[4] = {9, 1, 6, 2};
		for(int i = 0; i < 4; i++) 
			z.vect[i] = temp_vect[i];
	}

	std::cout << z.num << " " << z.id << " ";
	for(int i = 0; i < 4; i++) 
		std::cout << z.vect[i] << " ";

	return 0;
}