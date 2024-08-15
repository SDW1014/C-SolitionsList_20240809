#include <iostream>

// [2024-08-15]
// 문제 1번

// 1차원 배열 생성
// - 다섯 개의 요소를 가진 배열
// - 하드코딩된 값: {3, 5, 2, 4, 1}
// int oneDimArray[5] = {3, 5, 2, 4, 1};

// 2차원 배열 생성
// - 3 x 2 크기의 배열
// - 하드코딩된 값: {{9, 8}, {7, 1}, {3, 4}}
// int twoDimArray[3][2] = {{9, 8}, {7, 1}, {3, 4}};

// 숫자 입력 받기
// - 사용자로부터 숫자를 입력받아 홀짝을 판단
// int inputNumber;

// 숫자 입력을 위한 출력
// std::cout과 std::cin을 사용하여 입력을 받습니다.
// 아래 코드는 문제를 풀지 않고 주석으로 설명만 합니다.
// std::cout << "숫자를 입력하세요: ";
// std::cin >> inputNumber;

// 홀수인지 짝수인지 확인 후 출력
// - 입력된 숫자가 홀수일 경우 1차원 배열을 출력하고,
// - 짝수일 경우 2차원 배열을 출력합니다.
// if (inputNumber % 2 == 0) {
//     // 짝수일 경우 2차원 배열 출력
//     std::cout << "2차원 배열 출력:" << std::endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 2; j++) {
//             std::cout << twoDimArray[i][j] << " ";
//         }
//         std::cout << std::endl;
//     }
// } else {
//     // 홀수일 경우 1차원 배열 출력
//     std::cout << "1차원 배열 출력:" << std::endl;
//     for (int i = 0; i < 5; i++) {
//         std::cout << oneDimArray[i] << " ";
//     }
//     std::cout << std::endl;
// }

int main()
{
	int arr1[5] = {3,5,2,4,1};
	int arr2[3][2] = {{9,8},{7,1},{3,4}};

	int num;
	std::cin >> num;

	if(num % 2 == 1)
	{
		std::cout << arr1[0] << " " << arr1[1] << " " << arr1[2] << " " << arr1[3] << " " << arr1[4];
	}
	else
	{
		std::cout << arr2[0][0] << " " << arr2[0][1] << std::endl;
		std::cout << arr2[1][0] << " " << arr2[1][1] << std::endl;
		std::cout << arr2[2][0] << " " << arr2[2][1] << std::endl;	
	}

	return 0;
}