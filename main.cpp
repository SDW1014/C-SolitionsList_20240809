#include <iostream>

// [2024-08-12]
// 제목 : 숫자 1개를 입력받아 5번씩 3 줄 출력하기.
// 이중 while을 사용하여 구현합니다.
// 예시: 만약 3을 입력받았다면
// 33333
// 33333
// 33333
// 예시: 만약 5를 입력받았다면
// 55555
// 55555
// 55555

int main()
{
	int a;

	std::cin >> a;

	int outWhileIndex = 0;

	while(outWhileIndex < 3)
	{
		int insideWhileIndex = 0;

		while(insideWhileIndex < 5)
		{
			std::cout << a;
			insideWhileIndex++;
		}
		std::cout << std::endl;

		outWhileIndex++;
	}

	return 0;
}