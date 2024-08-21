#include <iostream>

// [2024-08-21]
// 제목 : LV15 - 연습문제

// 문제 3번
// 1. 두 문장을 입력받는다 (최대 5글자)
// 2. 각 문장을 정렬한다
// 3. 정렬한 문장을 한 문장으로 합친다
// 4. 결과를 출력한다

void bubbleSort(char (*arr)[5])
{
	for(size_t k = 0; k < 2; ++k)
	{
		for(size_t i = 0; i < 5; ++i)
		{
			for(size_t j = 0; j < 5 - 1 - i; ++j)
			{
				if(arr[k][j] == '\0' || arr[k][j + 1] == '\0')
					break;
				if(arr[k][j] > arr[k][j + 1])
				{
					char temp = arr[k][j];
					arr[k][j] = arr[k][j + 1];
					arr[k][j + 1] = temp;
				}
			}
		}
	}
}

int main()
{
	char arr[2][5];
	for(size_t i = 0; i < 2; ++i)
		std::cin >> arr[i];

	for (size_t i = 0; i < 2; ++i)
		bubbleSort(arr);

	std::cout << arr[0] << arr[1];

	return 0;
}