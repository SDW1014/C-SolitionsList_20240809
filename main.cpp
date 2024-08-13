#include <iostream>

// [2024-08-13]
// 문제 3번
// 3칸짜리 문자 배열을 만들고, 각 칸에 문자 'm', 'i', 'n'를 하드코딩 해 주세요.
// | m | i | n |
// 그리고 숫자 하나를 입력받고, 그 index에 해당하는 글자를 출력 해 주세요.
// 1. ex) 0을 입력하면
// 출력 : m
// [TIP]
// **문자를 하드코딩하는 방법1**
// char arr[3];
// arr[0] = 'm';
// arr[1] = 'i';
// arr[2] = 'n';
// **문자를 하드코딩 하는 방법2**
// char arr[3] = {'m', 'i', 'n'};
// ## 입력 예시
// 1
// ## 출력 예시
// i


int main()
{
	char arr[3] = {'m', 'i', 'n'};
	
	int index;
	std::cin >> index;

	std::cout << arr[index] << std::endl;
	
	return 0;
}