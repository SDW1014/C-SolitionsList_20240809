#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 연습 문제 

// 문제 1번
// 8칸짜리 배열을 하드코딩 해 주세요: {4, 3, 6, 1, 3, 1, 5, 3}
// 숫자 하나를 입력 받으세요
// 그리고 입력받은 숫자가 몇개 존재하는지 출력 해 주세요
// 입력 예시: 1
// 출력 예시: 숫자1개수는2개

int main()
{
	int arr[8] = {4, 3, 6, 1, 3, 1, 5, 3};

	int inputNumber;
	std::cout << "숫자를 입력하세요: ";
	std::cin >> inputNumber;

	int count = 0;
	for(int i = 0; i < 8; ++i)
	{
		if(arr[i] == inputNumber)
			++count;
	}
	std::cout << "숫자 " << inputNumber << " 개수는 " << count << "개" << std::endl;
	
	return 0;	
}