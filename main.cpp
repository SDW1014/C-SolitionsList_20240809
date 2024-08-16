#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 연습 문제 

// 문제 7번
// 학생들이 6x2 배열에 두명씩 짝을 지어 앉아있음.
// 배열의 각 줄은 두 학생의 숫자를 나타냄.
// 선생님은 숫자가 더 큰 학생이 왼쪽에 앉도록 SWAP을 해야 함.
// SWAP을 할 때마다 몇 명이 자리를 바꿨는지 카운트해야 함.
// 1중 for문을 사용하여 6번 반복하며 SWAP을 수행.
// 배열의 각 줄에서 table[x][0]과 table[x][1]을 비교하여 SWAP을 진행.
// 최종적으로 배열을 출력하고, 자리를 교체한 사람의 총 수를 출력해야 함.


int main()
{
	int table[6][2] = {0};

	for(int i = 0; i < 6; ++i)
		std::cin >> table[i][0] >> table[i][1];

	for(int i = 0; i < 6; ++i)
		std::cout << table[i][0] << " " << table[i][1] << std::endl;

	for(int i = 0; i < 6; ++i)
		if(table[i][0] < table[i][1])
		{
			int temp = table[i][0];
			table[i][0] = table[i][1];
			table[i][1] = temp;
		}

	for(int i = 0; i < 6; ++i)
		std::cout << table[i][0] << " " << table[i][1] << std::endl;

	return 0;
}