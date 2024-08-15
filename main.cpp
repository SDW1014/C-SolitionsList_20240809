#include <iostream>

// [2024-08-15]
// 문제 3번
// 문자 2개를 input함수에서 입력 받으세요
// output함수에서는 다음 조건에 따라 결과를 출력하세요
// - 그 문자가 둘 다 대문자라면 "**대문자들**" 출력
// - 그 문자 중 둘 중 하나만 대문자라면 "**대소문자**" 출력
// - 두 조건 모두 아니면 **a ~ z까지(abcdefg...z) 출력**
// TIP
// **g가 1 보다 크고 10보다 작을 때를 나타내는 소스코드는**
// **if (g > 1 , g < 10) 이 아니라**
// **if (1 < g < 10) 도 아니라**
// **if (g > 1 && g < 10) 이거 입니다.**
// **if 안에다가 컴마(,)를 쓰지마세요**

void input(char arr[2])
{
	std::cin >> arr[0] >> arr[1];
}

void output(char arr[2])
{
	if (arr[0] >= 'A' && arr[0] <= 'Z' && arr[1] >= 'A' && arr[1] <= 'Z')
	{
		std::cout << "**대문자들**" << std::endl;
	}
	else if (arr[0] >= 'A' && arr[0] <= 'Z' || arr[1] >= 'A' && arr[1] <= 'Z')
	{
		std::cout << "**대소문자**" << std::endl;
	}
	else
	{
		std::cout << "**a ~ z까지**" << std::endl;
	}
}

int main()
{
	char arr[2];
	input(arr);
	output(arr);

	return 0;
}