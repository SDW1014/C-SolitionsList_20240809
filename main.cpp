#include <iostream>

// [2024-08-12]
// 2차원 배열에 하드코딩된 문장 2개
// | D | A | T | A | W | \0 |
// | B | B | Q | K | \0 | \0 |
//
// 숫자 하나를 입력받습니다.
//
// 입력받은 숫자가 홀수면 윗줄을 정렬하고
// 입력받은 숫자가 짝수면 아랫줄을 정렬 해 주세요.
//
// ex) 만약 1을 입력받았다면 홀수이므로 윗줄만 정렬해야 합니다.
//
// 입력 예시: 3
// 출력 예시:
// AADTW
// BBQK

void bubbleSort(char arr[])
{
	for(int i = 0; i < sizeof(arr)/ sizeof(arr[0]); i++)
	{
		for(int j = 0 ; j < sizeof(arr)/ sizeof(arr[0])-1-j; ++j)
		{
			if(arr[j] > arr[j+1] && arr[j] != '\0' && arr[j+1] != '\0')
			{
				char temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

}

int main()
{
	char arr[2][6] = {"DATAW", "BBQK"};

	int num;
	std::cin >> num;

	if(num % 2 == 1)
		bubbleSort(arr[1]);
	else
		bubbleSort(arr[0]);

	std::cout << arr[0] << std::endl;
	std::cout << arr[1] << std::endl;
	
	return 0;
}