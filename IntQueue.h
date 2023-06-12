#pragma once
#include <string>

typedef struct
{
	int max;
	int num;//현재 데이터 개수
	int front;
	int rear;//인덱스
	char* que;//요소의 개수가 max인 배열

}IntQueue;

int Initialize(IntQueue* q, int max);

int Enque(IntQueue* q, string x);

int Deque(IntQueue* q, int* x);

int Peek(const IntQueue* q, int* x);

void Clear(IntQueue* q);

int Search(const IntQueue* q, int x);

void Print(const IntQueue* q);

void Terminate(IntQueue* q);