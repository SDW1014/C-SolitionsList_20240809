#include <iostream>

// [2024-08-18]
// 제목 : LV11 - 복습문제

// 문제 9번
// 3x3 배열을 하드코딩합니다. 이 배열은 문제에서 주어진 값으로 초기화됩니다.
// 배열의 초기값은 다음과 같습니다:
// | 3 | 1 | 6 |
// | 7 | 8 | 4 |
// | 9 | 2 | 3 |

// 사용자로부터 a, b, c 값을 입력받습니다. 
// a와 b는 배열의 인덱스이며, c는 배열에 넣을 값입니다.
// 입력받은 a, b 좌표에 c 값을 넣습니다. 
// 이때 a와 b는 배열의 유효한 인덱스여야 합니다.

// 배열에서 MAX와 MIN 값을 찾기 위한 변수를 초기화합니다.
// 초기값은 배열의 첫 번째 요소로 설정합니다.

// 2중 for문을 사용하여 배열의 모든 요소를 순회합니다.
// 각 요소를 확인하여 MAX와 MIN 값을 업데이트합니다.

// MAX와 MIN의 합을 출력합니다. 
// 이 값은 문제의 요구사항에 따라 출력됩니다.

int main()
{
	int array[3][3] = {
		{3, 1, 6},
		{7, 8, 4},
		{9, 2, 3}
	};

	int a, b, c;
	std::cout << "a, b, c 값을 입력하세요: ";
	std::cin >> a >> b >> c;

	array[a][b] = c;

	int max = 0;
	int min = 999999999;
	for(int i = 0; i < 3; i++) 
	{
		for(int j = 0; j < 3; j++) 
		{
			if(array[i][j] > max)
				max = array[i][j];
			if(array[i][j] < min)
				min = array[i][j];
		}
	}

	std::cout << "MAX: " << max << std::endl;
	std::cout << "MIN: " << min << std::endl;

	return 0;
}