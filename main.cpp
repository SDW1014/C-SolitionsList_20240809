#include <iostream>

// [2024-08-17]
// 제목 : LV11 - 연습문제

// 문제 6번 
// 주어진 배열을 하드코딩합니다.
// 배열: {3, 4, 1, 3, 2, 7, 3}

// 사용자로부터 숫자를 입력받습니다.
// 입력받은 숫자가 배열에 존재하는지 확인합니다.

// Flag 변수를 선언합니다.
// Flag 방식으로 숫자의 존재 여부를 검사합니다.
// 배열을 순회하며 입력받은 숫자가 존재하는지 확인합니다.
// 숫자가 발견되면 Flag를 켭니다.
// 발견했으므로 반복문을 종료합니다.

// Flag의 상태에 따라 결과를 출력합니다.
// 발견되면 "발견" 출력, 아니면 "미발견" 출력.

int main()
{
	int arr[7] = {3, 4, 1, 3, 2, 7, 3};

	int input;
	std::cout << "찾을 숫자를 입력하세요: ";
	std::cin >> input;

	int flag = 0;

	for(size_t i = 0; i < 7; ++i)
		if(arr[i] == input)
		{
			flag = 1;
			break;
		}

	if(flag == 1)
		std::cout << "발견" << std::endl;
	else
		std::cout << "미발견" << std::endl;

	return 0;
}