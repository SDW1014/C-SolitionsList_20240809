#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 복습문제

// 문제 1번
// 1. 배열A와 배열B를 하드코딩합니다.
// 2. 사용자로부터 숫자를 입력받습니다.
// 3. 배열A에서 입력받은 숫자의 개수를 세고, 배열B에서도 같은 작업을 수행합니다.
// 4. 두 배열에서 발견된 숫자의 개수를 더하여 출력합니다.

int arr1[5] = {2, 1, 2, 4, 5};
int arr2[3][3] = {{2, 5, 3}, {4, 5, 7}, {8, 7, 2}};

int main()
{
	int inputNum;
	std::cin >> inputNum;

	int count1 = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr1[i] == inputNum)
			count1++;
	}

	int count2 = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			if (arr2[i][j] == inputNum)
				count2++;
	}

	std::cout << count1 + count2 << std::endl;
	
	return 0;
}