#include <iostream>

// [2024-08-15]
// 문제 6번
// 문자 5개를 배열에 입력 받으세요
// 이중에서 숫자가 몇 개 발견되었는지 출력 해 주세요
// count하는 방법:
// count = 0;
// for (x=0; x<5; x++) {
//     if (arr[x] >= '0' && arr[x] <= '9') {
//         count++;
//     }
// }
// ex) a b c 7 d 이렇게 입력되었다면 "숫자1개발견" 출력
// ex) b q b q b 이렇게 입력되었다면 "숫자미발견" 출력
// 입력 예시: 1 2 3 a b
// 출력 예시: 숫자3개발견

int main()
{
	char arr[5] = {0};
	for(int i = 0 ; i < 5; ++i)
			std::cin >> arr[i];

	int count = 0;

	for(int i = 0; i < 5; ++i)
	{
		if(arr[i] >= '0' && arr[i] <= '9')
			++count;
	}

	if(count == 0)
		std::cout << "숫자미발견" << std::endl;
	else
		std::cout << "숫자" << count << "개발견" << std::endl;
	return 0;
}