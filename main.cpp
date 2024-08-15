#include <iostream>

// [2024-08-15]
// 문제 8번
// 배열 하드코딩
// - 예시 배열 : 
//   int 배열[3][3] = { {3, 4, 1}, 
//                       {2, 1, 4}, 
//                       {3, 3, 0} };
// - 홀수와 짝수의 개수를 세기 위한 카운팅 변수 필요
// - 0은 짝수로 취급



int main()
{
	int arr[3][3] = { {3, 4, 1}, {2, 1, 4}, {3, 3, 0} };

	int evenCount = 0;
	int oddCount = 0;

	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			if(arr[i][j] % 2 == 0)
				++evenCount;
			else
				++oddCount;
		}
	}

	std::cout << "짝수 : " << evenCount << ", 홀수 : " << oddCount << std::endl;

	return 0;
}