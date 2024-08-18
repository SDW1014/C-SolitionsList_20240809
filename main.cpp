#include <iostream>

// [2024-08-18]
// 제목 : LV13 - 연습문제

// 문제 10번
// 1. 입력으로 두 개의 알파벳(나라)을 받는다.
// 2. 각 알파벳은 A부터 Z까지의 나라를 나타내며, A는 0, B는 1, ..., Z는 25의 인덱스를 가진다.
// 3. 두 나라 사이의 거리를 계산하기 위해, 각 나라의 인덱스를 구하고 그 사이의 거리 값을 더해야 한다.
// 4. 거리 값은 미리 정의된 배열에 저장되어 있어야 하며, 인덱스를 통해 접근할 수 있다.
// 5. 최종적으로 계산된 거리를 출력한다.
// 6. 사용자 입력을 받아서 두 나라의 거리를 계산하고 출력하는 로직이 필요하다.
// 7. 거리 계산을 위한 함수가 필요하며, 이 함수는 두 나라의 인덱스를 받아서 그 사이의 거리 값을 반환해야 한다.
// 8. 거리 값은 문제에서 제공된 표를 기반으로 설정해야 하며, 배열 형태로 저장되어야 한다.

int main()
{
	char country[2];
	std::cin >> country[0] >> country[1];

	int countryDistance[7] = {4, 2, 5, 1, 6, 7, 3};

	int start = (country[0] > country[1]) ? country[1] - 'A' + 1 : country[0] - 'A' + 1;
	int end = (country[0] > country[1]) ? country[0] - 'A' : country[1] - 'A';

	int distance = 0;
	for (int i = start; i < end; i++)
		distance += countryDistance[i];

	std::cout << "두 나라 사이의 거리는 " << distance << "입니다." << std::endl;
	return 0;
}