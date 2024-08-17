#include <iostream>

// [2024-08-17]
// 제목 : LV11 - 연습문제

// 문제 10번
// 전역 배열 vect[2][5]를 하드코딩
// 배열의 값은 다음과 같습니다:
// | 3 | 2 | 6 | 2 | 4 |
// | 1 | 4 | 2 | 6 | 5 |

// KFC 함수는 vect 배열을 검사하여 특정 값이 존재하는지 확인하는 함수입니다.
// 이 문제에서는 2라는 값이 배열에 존재하는지를 체크해야 합니다.
// KFC 함수는 int형 값을 반환하며, 값이 존재하면 1을, 존재하지 않으면 0을 반환합니다.

// main 함수에서는 KFC 함수를 호출하고 그 결과를 받아서
// 반환 값이 1이라면 "값이 존재합니다"를 출력하고,
// 반환 값이 0이라면 "값이 없습니다"를 출력해야 합니다.

int vect[2][5] = { {3, 2, 6, 2, 4}, {1, 4, 2, 6, 5} };

int KFC(int target)
{
	for(int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < 5 ; j++)
		{
			if(vect[i][j] == target)
			{
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	
	int target = 0;
	std::cout << "찾을 값을 입력하세요: ";
	std::cin >> target;

	int result = KFC(target);

	switch (result)
	{
	case 1:
		std::cout << "값이 존재합니다." << std::endl;
		break;
	default:
		std::cout << "값이 없습니다." << std::endl;
		break;
	}
	return 0;
}