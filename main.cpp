#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 복습문제

// 문제 2번
// 1. 문자 5개를 1차 배열에 입력 받기 위해 std::cin을 사용합니다.
// 2. 입력받은 문자를 저장할 char 배열을 선언합니다.
// 3. 문자 'A'의 개수를 세기 위한 변수를 선언합니다.
// 4. 문자 'A'의 인덱스를 저장할 배열을 선언합니다.
// 5. 입력받은 문자들을 반복문을 통해 확인하고, 'A'가 발견될 때마다 카운트를 증가시키고 인덱스를 저장합니다.
// 6. 최종적으로 'A'의 개수와 인덱스를 출력합니다.

char arr[5] = {0};

int count = 0;

void CountA()
{
	for(int i = 0; i < 5; i++)
		if(arr[i] == 'A')
			count++;
}

void PrintIndex()
{
	for(int i = 0; i < 5; i++)
		if(arr[i] == 'A')
			std::cout << i << " 번째에 있습니다." << std::endl;
}

int main()
{
	for(int i = 0; i < 5; i++)
		std::cin >> arr[i];

	CountA();

	std::cout << count << std::endl;

	PrintIndex();

	return 0;
}