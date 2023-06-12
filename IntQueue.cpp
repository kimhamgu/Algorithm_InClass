#include <iostream>
#include "IntQueue.h"

using namespace std;

int Initialize(IntQueue *q, int max)//초기화
{
	q->num = q->front = q->rear = 0;
	if ((q->que = (int*)calloc(max, sizeof(int))) == NULL)//배열생성 실패
	{
		q->max = 0;
		return -1;
	}

	q->max = max;
	return 0;
}

int Enque(IntQueue* q, string x)
{
	if (q->num >= q->max)//큐가 가득참.
	{
		return -1;
	}
	else
	{
		q->num++;//큐에 있는 데이터 개수 추가.
		q->que[q->rear++] = x;//배열에 x값 인큐.

		if (q->rear == q->max)//배열의 끝까지 감.
		{
			q->rear = 0;
		}
	}

	return 0;
}

int Deque(IntQueue* q, int* x)
{
	if (q->num <= q->max)//디큐 할거 없음.
	{
		return -1;
	}

	else
	{
		q->num--;//데이터 개수 1개 뺌.
		*x = q->que[q->front++]; // x에다가 front가 가리키는 값 저장. front++되면 que[front]값 없어짐.

		if (q->front == q->max)// 인덱스 front가 끝까지 도달.
		{
			q->front = 0; 
		}

		return 0;
	}
	
}

int Peek(const IntQueue* q, int* x)//front가 가르키는 값을 엿보는 함수
									//출력만 함, 데이터 개수 변하지 않음.
{
	if (q->num <= 0)//큐 배열 빔.
	{
		return -1;
	}

	*x = q->que[q->front];
	return 0;
}

void Clear(IntQueue* q)//모든 데이터 삭제.
{
	q->num = q->front = q->rear = 0;
}

int Search(const IntQueue* q, int x)//데이터 검색.
{
	int idx;
	
	for (int i = 0;i < q->num;i++)
	{
		idx = (q->front + i) % q->max;

		if (idx == x)
		{
			return idx;
		}
	}

	return -1;
}

void Print(const IntQueue* q)
{
	for (int i = 0;i < q->num;i++)
	{
		int idx = (i + q->front) % q->max;

		cout << q->que[idx] << " ";


	}
}

void Terminate(IntQueue* q)
{
	if (q->que == NULL)//동적 할당된 배열 해제.
	{
		free(q->que);
	}

	q->front = q->max = q->num = q->rear = 0;
}