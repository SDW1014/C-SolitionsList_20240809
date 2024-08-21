#include <iostream>

// [2024-08-21]
// 제목 : LV15 - 연습문제

// 문제 8번
// 1. 최대 4개의 문장을 입력받아야 하며, 각 문장은 최대 6글자이다.
// 2. 입력받은 문장은 2차원 배열에 저장된다.
// 3. 각 문장의 길이를 저장할 1차원 배열이 필요하다.
// 4. 1차원 배열에 저장된 길이를 정렬한 후 출력해야 한다.

void sortLengths(int *arr)
{
	for(int i = 0; i < 4; ++i)
	{
		int min = i;
		for(int j = i + 1; j < 4; ++j)
		{
			if(arr[j] < arr[min])
				min = j;
		}
		if(min != i)
		{
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
}

int main()
{
	char sentences[4][6];
	int lengths[4];

	for(int i = 0; i < 4; ++i)
	{
		std::cin >> sentences[i];
		lengths[i] = strlen(sentences[i]);
	}

	sortLengths(lengths);

	for(int i = 0; i < 4; ++i)
		std::cout << lengths[i] << " ";

	return 0;
}