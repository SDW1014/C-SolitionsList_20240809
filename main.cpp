#include <iostream>

// [2024-08-12]
// 제목 : LV4으로 넘어간다.
// 문제 10번
// 2차배열에 두 문장을 입력받아주세요 (최대 5글자)
// 그리고 12칸짜리 1차원 char배열을 선언 해 주세요
// 입력받은 두 문장을 1차원 배열에 옮긴 후 출력 해 주세요
// 
// 예시: "World", "BBQ" 이렇게 두 문장을 2차배열에 입력받았다면
// 아래와 같이 1차배열로 문장을 옮겨 적어주면 됩니다
// 
// | W | o | r | l | d | B | B | Q | \0 |  |  |  |
// |---|---|---|---|---|---|---|---|---|---|---|---|
// 
// [HINT] 먼저 두 문장의 길이를 먼저 구해야 합니다
// 그리고 for문을 각각 돌려 1차배열에 값을 채우면 됩니다
// 
// 입력 예시
// World
// BBQ
// 
// 출력 예시
// WorldBBQ

int main()
{
	char arr[2][5];

	for(int i = 0; i < 2; i++)
		std::cin >> arr[i];

	char result[12];

	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 5; j++)
			if(arr[i][j] != '\0')
				result[i * 5 + j] = arr[i][j];
			else
				result[i * 5 + j] = '\0';


	std::cout << result << std::endl;

	return 0;
}