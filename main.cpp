#include <iostream>

// [2024-08-18]
// 제목 : LV11 - 복습문제

// 문제 1번
// 문자 배열을 하드코딩하고, 두 개의 문자를 입력받아 그 사이에 있는 문자가 배열에 존재하는지 확인하는 프로그램입니다.
// 문자 배열: D, F, G, D, A, Q
// 입력: 두 개의 문자 a와 b
// 조건: a와 b 사이에 있는 문자가 배열에 존재하면 "발견!!!" 출력
// 그렇지 않으면 "미발견!!!" 출력

int main()
{
	char arr[6] = {'D', 'F', 'G', 'D', 'A', 'Q'};

	char a, b;
	std::cout << "두 개의 문자를 입력하세요 (예: A C): ";
	std::cin >> a >> b;

	for(int i = 0; i < 6; i++)
	{
		if(arr[i] >= a && arr[i] <= b)
		{
			std::cout << "발견!!!" << std::endl;
			return 0;
		}
	}

	std::cout << "미발견!!!" << std::endl;
	return 0;
}