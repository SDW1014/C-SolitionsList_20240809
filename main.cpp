#include <iostream>

// [2024-08-11]
// 문제 14번 
// 숫자 한 개를 입력받아 Count Down을 출력합니다.
// 입력받은 숫자부터 0까지 감소하는 과정을 출력하고,
// 마지막에는 "발사"를 출력합니다.


int main()
{
	int CountNumber; 

	std::cin >> CountNumber;

	for(int i = CountNumber; i >= 0; --i)
		std::cout << i << std::endl;
	std::cout << "발사" << std::endl;

	return 0;
}