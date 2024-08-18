#include <iostream>

// [2024-08-19]
// 제목 : LV14 - 연습문제

// 문제 11번 
// 1. 2차원 배열을 하드코딩하여 두 개의 문장을 저장합니다.
// 2. 사용자로부터 숫자를 입력받습니다.
// 3. 입력받은 숫자가 홀수인지 짝수인지 확인합니다.
// 4. 홀수일 경우 첫 번째 줄을 정렬하고, 짝수일 경우 두 번째 줄을 정렬합니다.
// 5. 정렬된 결과를 출력합니다.

void sort(char arr[6])
{
	for(int i = 0; i < 6; ++i)
	{
		for(int j = 0; j < 6 - i - 1; ++j)
		{
			if(arr[j] == '\0' || arr[j + 1] == '\0')
			{
				continue;
			}
			if(arr[j] > arr[j + 1])
			{
				char temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	char data[2][6] = { "DATAW", "BBQK" };

	int a;
	std::cin >> a;

	if(a % 2 == 1)
	{
		sort(data[0]);
	}
	else
	{
		sort(data[1]);
	}

	for(int i = 0; i < 2; ++i)
	{
		std::cout << data[i] << std::endl;
	}

	return 0;
}