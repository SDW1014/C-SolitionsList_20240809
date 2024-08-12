#include <iostream>

// [2024-08-12]
// 문제 14번
// 두 문장을 하나의 이차배열에 입력받아주세요 (최대 8글자)
// 두 문장에서 같은 index에 있지만 다른 글자가 몇개인지 Counting 하여 출력 해 주세요
// 입력 예시: BackLog, BackBt
// 출력 예시: 3

int main()
{
	char arr[2][8];

	std::cin >> arr[0] >> arr[1];

	int count = 0;

	for(int i = 0 ; i < (strlen(arr[0]) < strlen(arr[1]) ? strlen(arr[0]) : strlen(arr[1])); ++i)
		if(arr[0][i] != arr[1][i])
			++count;
			
	count += strlen(arr[0]) < strlen(arr[1]) ? strlen(arr[1]) - strlen(arr[0]) : strlen(arr[0]) - strlen(arr[1]);

	std::cout << count << std::endl;

	return 0;
}