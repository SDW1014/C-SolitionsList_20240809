#include <iostream>

// [2024-08-12]
// 문제 4번 
// 숫자 6개를 입력받아 내림차순으로 정렬합니다.
// 입력 예시 : 3 5 1 6 5 8
// 출력 예시 : 865531
// 구체적인 예시 : 
// 입력 : 4 2 9 7 1 5
// 출력 : 97541

int main()
{
	int arr[6];

	for(int i = 0 ; i < 6; ++i)
		std::cin >> arr[i];

	for(int i = 0 ; i < 6; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	std::cout << "정렬을 시작합니다..." << std::endl;

	for(int i = 0 ; i <6; ++i)
	{
		for(int j = 0;  j < 6 -i -1; ++j)
		{
			if(arr[j] < arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	std::cout << "정렬을 종료합니다..." << std::endl;

	for(int i = 0 ; i < 6; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	return 0;
}