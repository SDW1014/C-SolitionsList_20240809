#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 복습문제

// 문제 5번
// 1. input함수: 2 x 3 배열에 문자 6개를 입력받기 위해 2중 for문을 사용해야 함
//    - 사용자로부터 문자를 입력받아 2차원 배열에 저장하는 로직이 필요함
// 2. findUpper함수: 대문자의 개수를 세고 출력해야 함
//    - 2차원 배열을 순회하며 대문자 개수를 세는 로직이 필요함
// 3. findLower함수: 소문자의 개수를 세고 출력해야 함
//    - 2차원 배열을 순회하며 소문자 개수를 세는 로직이 필요함
// 4. main함수에서는 input, findUpper, findLower 함수를 각각 한번씩 호출해야 함
//    - 2차원 배열을 선언하고, 각 함수를 호출하는 부분이 필요함

char arr[2][3];

void input()
{
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 3; j++)
			std::cin >> arr[i][j];
}

void findUpper()
{
	int count = 0;
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 3; j++)
			if(arr[i][j] >= 'A' && arr[i][j] <= 'Z')
				count++;
	std::cout << "대문자의 개수: " << count << std::endl;
}

void findLower()
{
	int count = 0;
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 3; j++)
			if(arr[i][j] >= 'a' && arr[i][j] <= 'z')
				count++;
	std::cout << "소문자의 개수: " << count << std::endl;
}

int main()
{
	input();
	findUpper();
	findLower();
	return 0;
}