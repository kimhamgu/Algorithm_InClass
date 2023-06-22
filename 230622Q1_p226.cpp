#include <iostream>

using namespace std;

//1 4 6 7 3 9 8

int arr[7] = { 1,4,6,7,3,9,8 };
char nextlevel[7];
int nextindex = 0;

void Print();
void reset();

int main()
{
	int min = 0;
	

	for (int i = 0; i < 7; i++)
	{

		int count = 0;
		reset();
		
		nextindex = i + 1;
		nextlevel[nextindex] = '+';

		for (int j = 0; j < i ; j++)
		{
			if (arr[j] > arr[i])
			{
				count++;
			}
		}

		for (int j = 0; j < count; j++)
		{
			int temp = arr[i - j];
			arr[i - j] = arr[i - 1 - j];
			arr[i - 1 - j] = temp;

			nextindex = i - count;
		}
		
		nextlevel[nextindex] = '^';

		for (int k = 0; k < 7; k++)
		{
			cout << arr[k] << " ";
		}

		cout << endl;

		Print();
		
	}
}


void Print()
{
	for (int i = 0; i < 7; i++)
	{
		cout << nextlevel[i] << " ";		
	}
	cout << endl;
}

void reset()
{
	for (int i = 0; i < 7; i++)
	{
		nextlevel[i] = ' ';
	}
}

///*for (int j = i + 1; j >= 0; j--)
		//{
		//	if (min > arr[j])
		//	{
		//		min = arr[j];

		//		nextindex = j;
		//	}		
		//}*/

		////nextlevel[nextindex] = '^';

		//for (int j = 0; j <= i + 1; j++)//0부터 i+1까지 중에 i+1보다 큰 애들 중에 최소값.
		//{
		//	if (arr[j] > arr[i + 1])
		//	{
		//		if (min > arr[j])
		//		{
		//			min = arr[j];
		//		}
		//	}
		//}
		//
		//if (min > arr[i + 1])//최소값이 i+1인 애보다 크면 스왑.
		//{
		//	for (int k = i + 1; k >= 0; k--)
		//	{
		//		int temp = arr[i + 1];
		//		arr[i + 1] = arr[i];
		//		arr[i] = temp;
		//	}
		//}
		//
		//for (int i = 0; i < 7; i++)
		//{
		//	cout << arr[i] << " ";
		//}

		//cout << endl; 

		//Print();

		/*int temp = min;
		min = arr[nextindex];
		arr[nextindex] = temp;	*/