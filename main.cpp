#include <iostream>

// [2024-08-13]
// 문제 2번 : 배열과 합계 계산
// 정수 4개를 저장할 수 있는 배열을 생성합니다.
// cin을 사용하여 사용자로부터 4개의 정수를 입력받습니다.
// for문을 사용하여 배열의 모든 요소를 더하여 전체 합을 구합니다.
// 마지막으로 전체 합을 출력합니다.


int main()
{
	int arr[4];

	for(int i = 0 ; i < 4; i++)
		std::cin >> arr[i];

	int result = 0;
	for(int i = 0 ; i < 4; ++i)
		result += arr[i];
	
	if(result != 0) 
		std::cout << result << std::endl;
		
	return 0;
}