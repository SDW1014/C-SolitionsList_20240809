#include <iostream>

// [2024-08-12]
// 제목 : 이중 while을 이용한 배열 채우기 문제
// 입력 : 문자 1개를 입력 받습니다.
// 출력 : 입력 받은 문자부터 순차적으로 배열에 값을 채웁니다.
// 주의 : 빈 공간은 빈칸으로 출력하며, NULL문자는 출력하지 않습니다.
//
// 예시 입력 : A
// 예시 출력 : 
// DEF
// BC
// A
//
// 예시 입력 : D
// 예시 출력 : 
// GHI
// EF 
// D

int main()
{
	char a;
	int arr[3] = {3,1,0};
	
	std::cin >> a;
	
	int outIndex = 0;

	while(outIndex < 3)
	{
		int inIndex = 0;
		
		while(inIndex < 3 - outIndex)
		{
			std::cout << (char)(a + arr[outIndex] + inIndex);
			
			inIndex++;
		}
		std::cout << std::endl;
		
		outIndex++;
	}

	return 0;
}