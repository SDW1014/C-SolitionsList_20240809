#include <iostream>

// [2024-08-17]
// 제목 : LV11 - 연습문제

// 문제 11번 
// 1. 2차 배열을 하드 코딩합니다.
//    배열의 내용은 다음과 같습니다:
//    | 1 | 3 | 6 | 2 |
//    | 4 | 2 | 4 | 5 |
//    | 6 | 3 | 7 | 3 |
//    | 1 | 5 | 4 | 6 |
// 
// 2. 사용자로부터 숫자 1개를 입력받습니다.
// 
// 3. 입력받은 숫자보다 더 큰 값을 찾아서 select 배열에 채웁니다.
//    select 배열은 16칸으로 선언합니다.
// 
// 4. 조건에 맞는 값을 select 배열에 추가하고, 나머지 칸은 비워둡니다.
// 
// 5. 최종적으로 select 배열의 내용을 출력합니다.


int main()
{
	int array[4][4] = { {1, 3, 6, 2}, {4, 2, 4, 5}, {6, 3, 7, 3}, {1, 5, 4, 6} };

	int a;
	std::cout << "숫자를 입력하세요: ";
	std::cin >> a;

	int select[16] = {0};

	int index = 0;
	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 4; j++)
			if(array[i][j] > a)
			{
				select[index] = array[i][j];
				index++;
			}

	std::cout << "select 배열의 내용은 다음과 같습니다: ";
	for(int i = 0; i < index; i++)
		std::cout << select[i] << " ";
	std::cout << std::endl;
	
	return 0;
}