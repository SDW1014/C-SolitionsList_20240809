#include <iostream>

 // Start of Selection
 // 숫자 두개를 입력 받아 주세요.
 // 만약 두 숫자가 같다면
 // **같습니다**를 출력해 주세요.
 // 다르다면
 // **다릅니다** 를 출력 해 주세요
 // 입력 예시: 5 5
 // 출력 예시: 같습니

int main()
{
	int a, b;
	std::cin >> a >> b;

	if(a == b)
	{
		std::cout << "같습니다." << std::endl;
		return 0;
	}

	std::cout << "다릅니다." << std::endl;
	
	return 0;
}