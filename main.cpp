#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 복습문제

// 문제 6번 
// 1. 3x3 배열을 하드코딩합니다.
//    배열의 내용은 다음과 같습니다:
//    | 3 | 5 | 14 |
//    | 2 | 3 | 9  |
//    | 6 | 2 | 7  |
//
// 2. 사용자로부터 숫자 1개를 입력받습니다.
//
// 3. 입력받은 숫자의 배수가 몇 개인지 세기 위해
//    MOD 연산자 (%)를 사용합니다.
//    배열의 각 요소에 대해 입력받은 숫자로 나누어
//    나머지가 0인 경우를 카운트합니다.
//
// 4. 최종적으로 배수의 개수를 출력합니다.
//
// 5. 주의: 문제를 풀지 않고, 코드로 만들지 않도록 합니다.
//    주석으로 문제를 분석하는 것만 포함합니다.

int array[3][3] = {
    {3, 5, 14},
    {2, 3, 9},
    {6, 2, 7}
};

void printArray() 
{
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
			std::cout << array[i][j] << " ";
		
		std::cout << std::endl;
	}
}

int main()
{
	int num;

	std::cout << "숫자 1개를 입력하세요: ";
	std::cin >> num;

	printArray();	

	int count = 0;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(array[i][j] % num == 0)
				count++;
		}
	}

	std::cout << "입력한 숫자의 배수는 총 " << count << "개입니다." << std::endl;

	return 0;
}