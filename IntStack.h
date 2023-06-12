#pragma once
#include <string>


typedef struct
{
	int max;
	int ptr;
	char* stk;

}IntStack;

int Initialize(IntStack* s, int max);//�ʱ�ȭ

int Push(IntStack* s, string x);//�����͸� Ǫ��

int Pop(IntStack* s, int *x);

int Peek(const IntStack* s, int* x);

void Clear(IntStack* s);

int Capacity(const IntStack* s);//������ �ִ�뷮

int Size(const IntStack* s);//������ ����

int IsEmpty(const IntStack* s);

int IsFull(const IntStack* s);

int Search(const IntStack* s, int x);

void Print(const IntStack* s);

void Terminate(IntStack* s);
