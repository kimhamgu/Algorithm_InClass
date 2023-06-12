#pragma once
#include <string>

typedef struct
{
	int max;
	int num;//���� ������ ����
	int front;
	int rear;//�ε���
	char* que;//����� ������ max�� �迭

}IntQueue;

int Initialize(IntQueue* q, int max);

int Enque(IntQueue* q, string x);

int Deque(IntQueue* q, int* x);

int Peek(const IntQueue* q, int* x);

void Clear(IntQueue* q);

int Search(const IntQueue* q, int x);

void Print(const IntQueue* q);

void Terminate(IntQueue* q);