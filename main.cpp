#include <iostream>

// [2024-08-21]
// 제목 : LV15 - 연습문제

// 문제 4번
// 1. 두 문장을 입력받는다. (최대 6글자)
// 2. 두 문장이 같은지 비교한다.
// 3. 길이가 같은지 확인한다.
// 4. 각 문장의 글자를 비교하여 다르면 "다름", 같으면 "같음"을 출력한다.
// 5. std::getline 사용 시 오류가 발생할 수 있으므로, 적절한 입력 방법을 고려해야 한다.

int strLength(char arr[6])
{
	int count = 0;
	for(size_t i = 0; i < 6; ++i)
	{
		if(arr[i] == '\0')
			break;
		++count;
	}
	return count;
}

void compare(char (*arr)[6])
{
	for(size_t i = 0; i < 6; ++i)
	{
		if(arr[0][i] != arr[1][i])
		{
			std::cout << "다름" << std::endl;
			return;
		}
	}
	std::cout << "같음" << std::endl;
}

int main()
{
	char arr[2][6];
	for(size_t i = 0; i < 2; ++i)
		std::cin >> arr[i];

	if(strLength(arr[0]) != strLength(arr[1]))
		std::cout << "다름" << std::endl;
	else
		compare(arr);

	return 0;
}