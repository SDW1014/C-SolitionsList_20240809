#include <iostream>

// [2024-08-15]
// 문제 5번
// 3칸짜리 char 배열을 만들고 문자 3개를 입력받아 대문자의 개수를 세는 문제입니다.
// 대문자 개수에 따라 출력 메시지가 달라집니다:
// - 대문자가 3개일 경우: "풍족하다"
// - 대문자가 1~2개일 경우: "적절하다"
// - 대문자가 0개일 경우: "부족하다"

// 입력 예시: A k t
// 출력 예시: 적절하다

int main()
{
	char arr[3];

	int count = 0;

	std::cin >> arr[0] >> arr[1] >> arr[2];

	for(int i = 0; i < 3; ++i)
	{
		if(arr[i] >= 'A' && arr[i] <= 'Z')
		{
			++count;
		}
	}

		switch(count)
	{
		case 3:
			std::cout << "풍족하다";
			break;
		case 1:
		case 2:
			std::cout << "적절하다";
			break;
		default:
			std::cout << "부족하다";
	}

	return 0;
}