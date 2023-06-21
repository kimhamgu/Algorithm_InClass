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

	//�����ַ� �߸��� �����ϰ� ���ؼ� �ٲٱ�.
	for (int i = 0; i < 7; i++)
	{
		reset();//��¹� �ʱ�ȭ.
		//�ּҰ��� �ּҰ� ����ִ� �ε��� ���ϱ�.
		int min = arr[i];
		minCheckindex = i;

		minCheck[i] = '*';//���� �� �� �κ��� ó��.

		for (int j = i + 1; j < 7; j++)
		{
			if (min >= arr[j])
			{
				min = arr[j];
				
				minCheckindex = j;
			}	
		}

		minCheck[minCheckindex] = '+';//���� �� �� �κ��� ���� ���� �κ�.
		//��¹� ���.
		Print();
		//�迭 ���.
		for (int i = 0; i < 7; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << endl;
		//����.
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