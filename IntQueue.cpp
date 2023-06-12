#include <iostream>
#include "IntQueue.h"

using namespace std;

int Initialize(IntQueue *q, int max)//�ʱ�ȭ
{
	q->num = q->front = q->rear = 0;
	if ((q->que = (int*)calloc(max, sizeof(int))) == NULL)//�迭���� ����
	{
		q->max = 0;
		return -1;
	}

	q->max = max;
	return 0;
}

int Enque(IntQueue* q, string x)
{
	if (q->num >= q->max)//ť�� ������.
	{
		return -1;
	}
	else
	{
		q->num++;//ť�� �ִ� ������ ���� �߰�.
		q->que[q->rear++] = x;//�迭�� x�� ��ť.

		if (q->rear == q->max)//�迭�� ������ ��.
		{
			q->rear = 0;
		}
	}

	return 0;
}

int Deque(IntQueue* q, int* x)
{
	if (q->num <= q->max)//��ť �Ұ� ����.
	{
		return -1;
	}

	else
	{
		q->num--;//������ ���� 1�� ��.
		*x = q->que[q->front++]; // x���ٰ� front�� ����Ű�� �� ����. front++�Ǹ� que[front]�� ������.

		if (q->front == q->max)// �ε��� front�� ������ ����.
		{
			q->front = 0; 
		}

		return 0;
	}
	
}

int Peek(const IntQueue* q, int* x)//front�� ����Ű�� ���� ������ �Լ�
									//��¸� ��, ������ ���� ������ ����.
{
	if (q->num <= 0)//ť �迭 ��.
	{
		return -1;
	}

	*x = q->que[q->front];
	return 0;
}

void Clear(IntQueue* q)//��� ������ ����.
{
	q->num = q->front = q->rear = 0;
}

int Search(const IntQueue* q, int x)//������ �˻�.
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
	if (q->que == NULL)//���� �Ҵ�� �迭 ����.
	{
		free(q->que);
	}

	q->front = q->max = q->num = q->rear = 0;
}