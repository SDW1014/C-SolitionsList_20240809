#include <iostream>

// 💡 **문제 1번**
// 아래의 그림과 같이 출력 해 주세요
// 5앞에는 띄어쓰기 한칸
// 8앞에는 띄어쓰기 두칸
// 0앞에는 띄어쓰기 세칸이 있습니다.
// 
// ## 출력 예시
// 1234
// 567
// 89
// 0

int main()
{
	int index = 1;
	for(int i = 0 ; i < 4; i++)
	{
		for(int j = 0; j < 4-i; j++)
		{
			std::cout << index%10;
			index++;
		}
		std::cout << std::endl;
	}
	
	return 0;
}