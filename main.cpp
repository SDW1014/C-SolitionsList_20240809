#include <iostream>

// [2024-08-14]
// 문제 14번
// 6칸짜리 arr배열을 만들어주세요.
// int arr[6] = {0};  
// 이 문제에서는 이렇게 모든 칸을 0으로 전체 초기화를 해 주어야 합니다.
// 숫자 2개를 변수 a와 b에다가 입력을 받아주세요
// 이 arr배열에 a ~ b 사이에 숫자를 넣어주세요
// 예로들어 2 5를 입력받았다면
// | 2 | 3 | 4 | 5 |  |  |
// 그리고 배열에 채운값만 출력해주시면 됩니다.
// - 변수 t를 활용해주세요
// - 항상 a보다 b값이 더 큽니다.
// - a 와 b 의 간격은 6칸 이내 입니다.

int main()
{
	int arr[6] = {0};

	int a, b;
	std::cin >> a >> b;

	int inputdata = a;
	for(int i = 0 ; i < 6; i++)
	{
		if(inputdata > b)
			break;
		arr[i] = inputdata;
		inputdata++;
	}

	for(int i = 0; i < 6; i++)
	{
		if(arr[i] == 0)
			continue;
		std::cout << arr[i] << " ";
	}

	return 0;
}