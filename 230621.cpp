#include <iostream>
 
using namespace std;

const int SIZE = 10;
char minCheck[SIZE];

void Print();
void reset();

//case 1.
int main()
{	
	int arr[SIZE] = { 6,4,8,3,1,9,7 };
	int minCheckindex = 0;

	//작은애로 추린거 제외하고 비교해서 바꾸기.
	for (int i = 0; i < 7; i++)
	{
		reset();//출력문 초기화.
		//최소값과 최소값 들어있는 인덱스 구하기.
		int min = arr[i];
		minCheckindex = i;

		minCheck[i] = '*';//정렬 안 된 부분의 처음.

		for (int j = i + 1; j < 7; j++)
		{
			if (min >= arr[j])
			{
				min = arr[j];
				
				minCheckindex = j;
			}	
		}

		minCheck[minCheckindex] = '+';//정렬 안 된 부분의 제일 작은 부분.
		//출력문 출력.
		Print();
		//배열 출력.
		for (int i = 0; i < 7; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << endl;
		//스왑.
		int temp = arr[i];
		arr[i] = arr[minCheckindex];
		arr[minCheckindex] = temp;
	}	

}

void Print()
{
	for (int i = 0; i < 7; i++)
	{
		cout << minCheck[i] << " ";
	}
	cout << endl;
}

void reset()
{
	for (int i = 0; i < 7; i++)
	{
		minCheck[i] = ' ';
	}
}

//case 2.
//int main()
//{
//	const int SIZE = 10;
//	int arr[SIZE] = { 6,4,8,3,1,9,7 };
//	int min = arr[0];
//	int count = 0;
//	
//	while (count != 7)
//	{
//		for (int i = 0; i < 7; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		
//		for (int i = 0; i + 1 < 7; i++)
//		{
//			if (arr[i] >= arr[i + 1])
//			{
//				int temp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = temp;
//			}
//
//
//		}
//
//		cout << endl;
//
//		count++;
//	}	
//	
//}