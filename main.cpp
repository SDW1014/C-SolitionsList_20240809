#include <iostream>

// [2024-08-12]
// 문제 7번
// main 함수에서 3 x 3 배열을 만들고 Magic이라는 함수로 배열을 보내주세요 (함수호출)
// magic함수에서 아래와 같이 중첩 2중for문을 돌려 배열을 채워주세요
// | 1 | 2 | 3 |
// |   | 4 | 5 |
// |   |   | 6 |
// 이제 output함수에서 3 x 3배열을 출력 해 주세요
// 이때 빈칸은 " "공백으로 바꾸어서 출력 해 주세요

void Magic(int arr[3][3])
{
	int inputIndex = 1;
	for(int i = 0 ; i < 3; ++i)
	{
		for(int j = 0 + i ; j < 3; ++j)
		{
			arr[i][j] = inputIndex;
			inputIndex++;
		}
	}
}

void Output(int arr[3][3])
{
	for(int i = 0 ; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			if(arr[i][j] == -858993460) 
			{
				std::cout << " ";
			}
			else
			{
				std::cout << arr[i][j];
			}
		}
		std::cout << std::endl;
	}
}

int main()
{
	int arr[3][3];
	Magic(arr);
	Output(arr);

	return 0;
}