#include <iostream>

// [2024-08-18]
// 제목 : LV12 - 연습문제

// 문제 9번
// 3 x 3 배열을 0으로 초기화
// 문자 1개를 입력 받음
// 입력된 문자가 '0' ~ '9' 사이의 문자일 경우:
//   - 배열을 6부터 시작하여 입력된 숫자까지 채움
//   - 나머지 빈칸은 0으로 남김
// 입력된 문자가 대문자일 경우:
//   - 특정 패턴에 따라 배열을 채움
//   - 나머지 빈칸은 0으로 남김
// 배열을 출력할 때 0은 띄어쓰기로 대체

int main()
{	
	int arr[3][3] = {0};
	char input;
	std::cin >> input;

	if(input >= '0' && input <= '9')
	{
		int num = 6;
		for(int i = 0; i < 3; ++i)
		{
			for(int j = 0; j < 3; ++j)
			{
				if(j > i - 1)
				{
					arr[i][j] = num;
					num--;
				}
			}
		}
	}
	else if(input >= 'A' && input <= 'Z')
	{
		int num = 6;
		for(int i = 0; i < 3; ++i)
		{
			for(int j = 2; j >= 0; --j)
			{
				if(j < 1 + i)
				{
					arr[i][j] = num;
					num--;
				}
			}
		}
	}

	for(size_t i = 0; i < 3; ++i)
	{
		for(size_t j = 0; j < 3; ++j)
			std::cout << arr[i][j] << ' ';
		std::cout << std::endl;
	}
	
	return 0;
}