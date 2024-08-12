#include <iostream>

// [2024-08-12]
// 문제 5번 
// 한 문장을 입력받아주세요. 문장을 알파벳 순서대로 정렬하여 출력 해 주세요.
// ex) ANDBBQ 를 입력받았다면 각 알파벳을 정렬하여 "ABBDNQ" 를 출력하면 됩니다.
// HINT: char 변수에 저장되는 문자는 사실 숫자로 구성 되어 있습니다.
// char w = 'A'; // w에는 숫자 65가 저장되어 있음
// 입력받은 문장이 몇 글자인지 알아내야 합니다.

int main()
{
	char arr[1000];
	
	std::cin >> arr;

	std::cout << "입력 된 문장 : " << arr << std::endl;
	std::cout << "\n정렬을 시작합니다. (올림차순)" << std::endl;

	// strlen 외에도 sizeof(arr) 또는 std::string을 사용할 수 있습니다.
	// sizeof(arr) : 배열의 전체 크기를 바이트 단위로 반환합니다. 
	// 하지만 sizeof(arr)로 얻는 값은 배열의 크기이므로, 
	// 문자열의 길이를 구하려면 sizeof(arr) / sizeof(arr[0])를 사용해야 합니다.
	// std::string : C++의 문자열 클래스를 사용하여 문자열 길이를 쉽게 구할 수 있습니다.
	
	std::cout << sizeof(arr)/ sizeof(arr[0]) << std::endl;

	// 입력한 문자열이 5자라면, strlen(arr)은 5를 반환합니다.
	// 그러나 sizeof(arr)는 1000을 반환합니다. 
	// 이는 배열의 전체 크기이기 때문에, 실제 입력된 문자열의 길이와는 다릅니다.
	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i)
	{
		for(int j = 0; j < sizeof(arr)/sizeof(arr[0]) - 1 - i; ++j)
		{
			if(arr[j+1] == '\0')
				break;
				
			if(arr[j] > arr[j+1])
			{
				char temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp; 
			}
		}
	}

	std::cout << "정렬 된 문장 : " << arr << std::endl;

	return 0;
}