#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 연습 문제 

// 문제 3번
// 다음 6칸짜리 배열을 하드코딩 해 주세요
// | A | F | G | A | B | C |
// 문자 2개를 입력 받으세요.
// 입력받은 문자 2개 모두 존재하면 "와2개" 출력
// 입력받은 문자 중 1개만 존재하면 "오1개" 출력
// 입력받은 문자가 하나도 없으면 "우0개" 출력
// count1, count2 변수를 2개 만드세요
// for문을 돌려 찾는 숫자가 발견될 때 마다 counting을 해 주세요.
// count에 1 이상 값이 들어있으면, 그 숫자가 배열에 존재한다는 뜻 입니다.


int main()
{
	char arr[6] = {'A', 'F', 'G', 'A', 'B', 'C'};
	char input1, input2;

	bool check1 = false;
	bool check2 = false;

	std::cout << "두 문자를 입력하세요 : ";
	std::cin >> input1 >> input2;

	for(int i = 0; i < 6; i++)
	{
		if(arr[i] == input1)
			check1 = true;
		if(arr[i] == input2)
			check2 = true;
	}

	if(check1 && check2)
		std::cout << "와2개";
	else if(check1 || check2)
		std::cout << "오1개";
	else
		std::cout << "우0개";

	return 0;
}