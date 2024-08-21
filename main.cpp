#include <iostream>

// [2024-08-21]
// 제목 : LV15 - 연습문제

// 문제 6번
// 6명의 학생들이 일렬로 앉아있고, 성적 차이가 3보다 작아야 한다.
// 성적을 입력받고, 배열에 저장한 후, 앞사람과 뒷사람의 성적 차이를 검사한다.
// 차이가 3 이상인 경우 "재배치필요"를 출력하고, 그렇지 않으면 "완벽한배치"를 출력한다.

int main()
{
	int arr[6];
	for(size_t i = 0; i < 6; ++i)
		std::cin >> arr[i];

	for(size_t i = 0; i < 5; ++i)
	{
		int a = (arr[i] > arr[i + 1]) ? arr[i] : arr[i + 1];
		int b = (arr[i] < arr[i + 1]) ? arr[i] : arr[i + 1];

		if(a - b > 3)
		{
			std::cout << "재배치필요" << std::endl;
			return 0;
		}
	}
	std::cout << "완벽한배치" << std::endl;
	return 0;
}