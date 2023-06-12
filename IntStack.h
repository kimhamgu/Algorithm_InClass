#pragma once
#include <string>


typedef struct
{
	int max;
	int ptr;
	char* stk;

}IntStack;

int Initialize(IntStack* s, int max);//초기화

int Push(IntStack* s, string x);//데이터를 푸시

int Pop(IntStack* s, int *x);

int Peek(const IntStack* s, int* x);

void Clear(IntStack* s);

int Capacity(const IntStack* s);//데이터 최대용량

int Size(const IntStack* s);//데이터 개수

int IsEmpty(const IntStack* s);

int IsFull(const IntStack* s);

int Search(const IntStack* s, int x);

void Print(const IntStack* s);

void Terminate(IntStack* s);
