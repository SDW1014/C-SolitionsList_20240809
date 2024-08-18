#include <iostream>

// [2024-08-18]
// 제목 : LV13 - 연습문제

// 문제 5번 
// 이 문제는 전역변수를 사용하지 않고 포인터를 활용하여 해결해야 합니다.
// 배열은 하드코딩되어 있으며, 아래와 같이 선언합니다:
// int array[2][6] = {{4, 5, 6, 1, 3, 1}, {2, 1, 3, 6, 3, 6}};

// input 함수는 사용자로부터 좋아하는 숫자 3개를 입력받습니다.
// 이 함수는 포인터를 사용하여 입력받은 값을 메인 함수에서 사용할 수 있도록 합니다.

// process 함수는 입력받은 숫자들이 배열에 각각 몇 개 있는지를 세는 역할을 합니다.
// 이 함수는 3개의 숫자와 3개의 포인터를 인자로 받아서 각 숫자의 개수를 카운트합니다.

// output 함수는 process 함수에서 계산된 결과를 출력합니다.
// 이 함수는 입력받은 숫자와 그 숫자의 개수를 인자로 받아서 결과를 출력합니다.

void input(int* fav1, int* fav2, int* fav3) 
{
	std::cout << "좋아하는 숫자 3개를 입력하세요: ";
	std::cin >> *fav1 >> *fav2 >> *fav3;
}

void process(int fav1, int fav2, int fav3, int* count1, int* count2, int* count3, int (*array)[6])
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (array[i][j] == fav1) (*count1)++;
			if (array[i][j] == fav2) (*count2)++;
			if (array[i][j] == fav3) (*count3)++;
		}
	}
}

void output(int fav1, int fav2, int fav3, int count1, int count2, int count3)
{
	std::cout << "좋아하는 숫자 " << fav1 << "은 " << count1 << "개 있습니다." << std::endl;
	std::cout << "좋아하는 숫자 " << fav2 << "은 " << count2 << "개 있습니다." << std::endl;
	std::cout << "좋아하는 숫자 " << fav3 << "은 " << count3 << "개 있습니다." << std::endl;
}

int main()
{
	int array[2][6] = {{4, 5, 6, 1, 3, 1}, {2, 1, 3, 6, 3, 6}};

	int fav1, fav2, fav3;
	input(&fav1, &fav2, &fav3);

	int count1 = 0, count2 = 0, count3 = 0;
	process(fav1, fav2, fav3, &count1, &count2, &count3, array);
	
	output(fav1, fav2, fav3, count1, count2, count3);

	return 0;
}