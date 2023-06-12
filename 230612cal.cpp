#include <iostream>
#include <fstream>
#include <string>
#include "IntQueue.h"
#include "IntStack.h"

using namespace std;

int main()
{
	IntQueue que;
	IntStack stk;
	int x = 0;

	ifstream fin;
	fin.open("calc.txt");//���� ����.(������ ����)

	string calc;
	if (fin.is_open())
	{
		fin >> calc;
	}
	else
	{
		cout << "������ ã�� �� �����ϴ�." << endl;
	}

	fin.close();

	for (int i = 0;i < calc.size();i++)
	{
		if (isdigit(calc[i]) == 1)//����(�ǿ�����)�϶�
		{
			Enque(&que, calc[i]);
		}
		else
		{
			Push(&stk, calc[i]);
		}
	}

	Print(&stk);
	cout << endl;
	Print(&que);

	return 0;
}