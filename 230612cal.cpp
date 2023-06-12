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
	fin.open("calc.txt");//파일 열기.(없으면 생성)

	string calc;
	if (fin.is_open())
	{
		fin >> calc;
	}
	else
	{
		cout << "파일을 찾을 수 없습니다." << endl;
	}

	fin.close();

	for (int i = 0;i < calc.size();i++)
	{
		if (isdigit(calc[i]) == 1)//숫자(피연산자)일때
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