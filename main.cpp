#include <iostream>

 // Start of Selection
 // 문제 11번
 // 위와 같이 코딩하면 #이 3회 출력 됩니다.
 // 이것을 소스코드로 표현하면 아래와 같이 작성할 수 있습니다.
 // **위를 참고하여**
 // **for문을 이용해 #을 총 10회 출력** 하는 소스코드를 작성해주세요.**(입력없음)**
 // 출력 예시
 // ##########

int main()
{
	for(int i = 0 ; i < 10; ++i)
		std::cout << "#";
	std::cout << std::endl;
	return 0;
}