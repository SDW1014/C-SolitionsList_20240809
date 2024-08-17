#include <iostream>

// [2024-08-18]
// 제목 : LV10 - 복습문제

// 문제 2번
// 2차 배열에 값을 채우기
// 5 x 5 배열을 생성하고, 각 요소는 1부터 25까지의 숫자로 채워진다.
// 사용자가 입력한 숫자에 해당하는 행을 모두 입력받은 숫자로 채워야 한다.
// 예를 들어, 사용자가 3을 입력하면 3번 행을 모두 3으로 채운다.
// 출력 형식은 각 행을 공백으로 구분하여 출력한다.

int main()
{
	int arr[5][5] = {0};

	for(int i = 0; i < 5; ++i)
		for(int j = 0; j < 5; ++j)
			arr[i][j] = 21 + i - (j * 5);

	for(int i = 0; i < 5; ++i)
	{
		for(int j = 0; j < 5; ++j)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}
	std::cout << std::endl;

	int num = 0; 
	std::cout << "숫자를 입력하세요 : ";
	std::cin >> num;

	for(int i = 0; i < 5; ++i)
		for(int j = 0; j < 5; ++j)
			if(i == num)
				arr[i][j] = num;

	for(int i = 0; i < 5; ++i)
	{
		for(int j = 0; j < 5; ++j)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}
	std::cout << std::endl;

	return 0;
}