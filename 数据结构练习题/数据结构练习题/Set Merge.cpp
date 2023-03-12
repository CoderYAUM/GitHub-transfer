#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 

typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode, * LinkList;

void Interrupt(void)
{
	while (1) 
		if (getchar() == '\n')
			break;
}

bool InitList(LinkList& L)
{
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false;
	L->next = NULL;
	return true;
}

bool Empty(LinkList L)
{
	if (L->next == NULL)
		return true;
	return false;
}

LinkList CreatList(LinkList& L)
{
	int a;
	LNode* s, * r = L;
	printf("请输入链表数据：");
	while (1)
	{
		scanf("%d", &a);
		s = (LNode*)malloc(sizeof(LNode));
		s->data = a;
		r->next = s;
		r = s;
		if (getchar() == '\n')
			break;
	}
	r->next = NULL;
	return L;
}

void traverseLNode(LinkList L)
{
	LNode* p = L->next;
	while (1) 
	{
		printf("%d  ", p->data);
		if (p->next == NULL)
		{
			printf("\n");
			break;
		}
		p = p->next;
	}
}

int Length(LinkList L)
{
	int j = 0;
	LNode* p = L;
	while (1)
	{
		p = p->next;
		j++;
		if (p->next == NULL)
			break;
	}
	return j;
}
int GetElem(LinkList L, int i) 
{
	int j;
	LNode* p = L;
	for (j = 0; j < i; j++)
		p = p->next;
	return p->data;
}

bool JudgeSet(LinkList L)
{
	int i, j, a, b;
	for (i = 1; i <= Length(L); i++)
	{
		a = GetElem(L, i);
		for (j = i + 1; j <= Length(L); j++)
		{
			b = GetElem(L, j);
			if (a == b)
			{
				printf("输入的不是数组\n");
				return false;
			}
		}
	}
	return true;
}

void MergeList(LinkList L, LinkList& P)
{
	int i = 1;
	for (; i <= Length(L); i++)
	{
		LNode* r;
		r = (LNode*)malloc(sizeof(LNode));
		r->data = GetElem(L, i);
		LNode* s = P;
		while (1)
		{
			s = s->next;
			if (s->data == r->data)
				break;
			if (s->next == NULL)
			{
				s->next = r;
				r->next = NULL;
				break;
			}
		}
	}
}

int main()
{
	LNode* L;
	InitList(L);
	CreatList(L);
	LNode* P;
	InitList(P);
	CreatList(P);
	if (JudgeSet(L) && JudgeSet(P))
	{
		MergeList(L, P);
		traverseLNode(P);
	}
	free(L);
	free(P);
	return 0;
}
