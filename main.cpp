#include <iostream>

// [2024-08-17]
// 제목 : LV10 - 연습문제

// 문제 8번
// 2차 배열(4x4)을 선언합니다.
// 배열에 숫자를 입력받기 위한 사용자 안내 메시지를 출력합니다.
// 입력을 받기 위해 이중 for문을 사용할 것입니다.
// 배열의 각 요소를 확인하여 짝수, 홀수, 0에 따라 다른 문자를 출력할 것입니다.
// 짝수는 '#', 홀수는 '@', 0은 '!'로 출력합니다.



int main()
{
	int arr[4][4] = {0};

	std::cout << "4x4 배열의 숫자를 입력하세요 (공백으로 구분): ";
	for(size_t i = 0; i < 4; ++i)
		for(size_t j = 0; j < 4; ++j)
			std::cin >> arr[i][j];

	for(size_t i = 0; i < 4; ++i) 
	{
		for(size_t j = 0; j < 4; ++j) 
		{
			if(arr[i][j] == 0) 
				std::cout << "!";
			else if(arr[i][j] % 2 == 0) 
				std::cout << "#";
			else 
				std::cout << "@";
		}
		std::cout << std::endl;
	}

	return 0;
}