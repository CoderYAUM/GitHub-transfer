#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include"assert.h"

//˳����ʵ��
//int FindPos(int*arr,int x,int sz)
//{
//	int i = 0;
//	int pos = 1;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] < x)
//		{
//			pos++;
//		}
//		else             //ע��if else����ʹ�ã�������©��else��
//		{                //��©��else���ʹ��������ѡ�����bug����ʾ���������
//			break;
//		}
//		
//	}
//	return pos;
//}
//
//void InsertNum(int*arr,int x,int pos,int sz)
//{
//	int end = sz - 1;
//	while (end >= pos)
//	{
//		arr[end + 1] = arr[end];
//		end--;
//	}
//	arr[pos] = x;
//}
//
//void Print(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{ 
//	int va[] = { 1,2,3,6,7,9 };             //ע�����ʹ�ö�̬�ڴ濪�٣����򽫳��������������������
//	int sz = sizeof(va) / sizeof(va[0]);
//	int x;
//	scanf_s("%d", &x);
//	int pos = FindPos(va, x, sz);
//	printf("%d", pos);
//	InsertNum(va, x, pos, sz);
//	Print(va, sz);
//	return 0;
//}

//void Print(int* a,int b)
//{
//	int i = 0;
//	for (i = 0; i < b; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//
//int Compare(int* a1, int* a2, int a, int b)
//{
//	int i = 0;
//	while (i < a && i < b && i >= 0)
//	{
//		if (a1[i] == a2[i])
//			i++;
//		else
//			break;
//	}
//	return a1[i] - a2[i];
//}
//
//int main()
//{
//	int a1[] = { 4,3,5,2,7,9 };
//	int a2[] = { 4,3,8,4,8,5 };
//	int l1 = 6, l2 = 6;
//	Print(a1, l1);
//	Print(a2, l2);
//	int ret = Compare(a1, a2, l1, l2);
//	printf("%d\n", ret);
//	return 0;
//}

//�������ʵ��
//typedef int SLDataType;
//typedef struct SListNode
//{
//	SLDataType data;
//	struct SListNode* next;
//}SLNode;
//
//SLNode* BuyListNode(SLDataType x)
//{
//	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
//	newnode->data = x;
//	newnode->next = NULL;
//	return newnode;
//}
//
//void SListPrint(SLNode* phead)
//{
//	SLNode* cur = phead;
//	while (phead != NULL)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	printf("\n");
//}
//
//void SListInsertBefore(SLNode** pphead, SLNode* pos, SLDataType x)
//{
//	SLNode* newnode = BuyListNode(x);
//	SLNode* cur = *pphead;
//	if (*pphead = pos)       //����©��ֻ��һ��ͷ�ڵ�����
//	{
//		newnode->next = *pphead;
//		*pphead = newnode;
//	}
//	else
//	{
//		while (cur->next != pos)
//		{
//			cur = cur->next;
//		}
//		newnode->next = pos;
//		cur->next = newnode;
//	}
//}
//
//void SListInsertAfter( SLNode* pos, SLDataType x)
//{
//	SLNode* newnode = BuyListNode(x);
//	newnode->next = pos->next;
//	pos->next = newnode;
//}
//
//void SListErase(SLNode** pphead, SLNode* pos)
//{
//	SLNode* cur = *pphead;
//	if (*pphead = pos)
//	{
//		*pphead = pos->next;
//		free(pos);
//	}
//	else
//	{
//		while (cur->next != pos)
//		{
//			cur = cur->next;
//		}
//		cur->next = pos->next;
//		pos->next = NULL;
//		free(pos);
//	}
//}
//
//void SListDestory(SLNode** pphead)
//{
//	SLNode* cur = *pphead;
//	while(cur)
//	{
//		SLNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	*pphead = NULL;
//}
//
//int main()
//{
//	SLNode* plist = NULL;
//	SListInsertAfter(plist, 1);
//	SListInsertAfter(plist, 2);
//	SListInsertAfter(plist, 3);
//	SListInsertAfter(plist, 4);
//	SListInsertAfter(plist, 5);
//	SListPrint(plist);
//
//	return 0;
//}


//˫��ѭ�������ʵ��
//typedef int LDataType;
//typedef struct ListNode
//{
//	LDataType data;
//	struct ListNode* next;
//	struct ListNode* prev;
//}LNode;
//
//LNode* ListInit()
//{
//	LNode* phead = (LNode*)malloc(sizeof(LNode));//
//	phead->next = phead;
//	phead->prev = phead;
//	return phead;
//}
//
//void ListPrint(LNode* phead)
//{
//	assert(phead);//
//	LNode* cur = phead->next;//
//	while (cur!=phead)//
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	printf("\n");
//}
//
//LNode* BuyListNode(LDataType x)
//{
//	LNode* newnode = (LNode*)malloc(sizeof(LNode));
//	newnode->data = x;
//	newnode->next = newnode;
//	newnode->prev = newnode;
//	return newnode;
//}
//
//void ListInsert(LNode* pos, LDataType x)
//{
//	assert(pos);
//	LNode* cur = pos->prev;
//	LNode* newnode = BuyListNode(x);
//	newnode->next = pos;
//	cur->next = newnode;
//	newnode->prev = cur;
//	pos->prev = newnode;
//}
//
//void ListErase(LNode* pos)
//{
//	assert(pos);
//	pos->next->prev = pos->prev;
//	pos->prev->next = pos->next;
//}
//
//void ListDestory(LNode* phead)
//{
//	assert(phead);
//	LNode* cur = phead->next;
//	while (cur != phead)
//	{
//		LNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	free(phead);//
//	phead = NULL;
//}
//
//LNode* ListFind(LNode* phead, LDataType x)//
//{
//	assert(phead);
//	LNode* cur = phead;
//	while (cur->data != x)
//	{
//		cur = cur->next;
//	}
//	return cur;
//}
//
//int main()
//{
//	LNode* plist = ListInit();
//	ListInsert(plist, 1);
//	ListPrint(plist);
//
//
//	return 0;
//}


//ջ�����

//ջ�����ʵ��
//typedef int ElementType;
//typedef struct SNode
//{
//	ElementType* data;
//	int top;
//	int maxsize;
//}SNode;
//
//typedef SNode* stack;
//
//stack CreatStack(int maxsize)
//{
//	stack s = (stack)malloc(sizeof(SNode));
//	s->data = (ElementType*)malloc((maxsize) * sizeof(ElementType));
//	s->top = -1;
//	s->maxsize = maxsize;
//	return s;
//}
//
//bool IsFull(stack s)
//{
//	return (s->top == s->maxsize - 1);
//}
//
//bool IsEmpty(stack s)
//{
//	return (s->top == -1);
//}
//
//void Print(stack s)
//{
//	if (IsEmpty(s))
//	{
//		printf("ջ��\n");
//	}
//	else
//	{
//		int pos = s->top;
//		for (pos = 0; pos <= s->maxsize - 1; pos++)
//		{
//			printf("%d ", s->data[pos]);
//		}
//		printf("\n");
//	}
//}
//
//bool PushStack(stack s, ElementType x)
//{
//	if (IsFull(s))
//	{
//		printf("ջ��\n");
//		return false;
//	}
//	else
//	{
//		s->data[++(s->top)] = x;
//		return true;
//	}
//	//Print(s);
//}
//ElementType PopStack(stack s)
//{
//	if (IsEmpty(s))
//	{
//		printf("ջ��\n");                                               
//		return false;
//	}
//	else
//	{
//		return s->data[(s->top)--];
//	}
//	//Print(s);
//}
//
//int main()
//{
//	stack s;
//	s = CreatStack(10);
//	PushStack(s, 1);
//	Print(s);
//	PushStack(s, 2);
//	Print(s);
//	PushStack(s, 3);
//	Print(s);
//	PopStack(s);
//	Print(s);
//	PopStack(s);
//	Print(s);
//	return 0;
//}

//ջ�����ʵ��

//typedef int ElenmenType;
//typedef struct SNode
//{
//	ElenmenType data;
//	struct SNode* next;
//}SNode;
//typedef SNode* stack;
//
//stack InitStack()
//{
//	stack s = (SNode*)malloc(sizeof(SNode));
//	s->next = NULL;
//	return s;
//}
//
//void PushStack(stack s, ElenmenType x)
//{
//	stack tmp = (stack)malloc(sizeof(SNode));
//	tmp->data = x;
//	tmp->next = s->next;
//	s->next = tmp;
//}
//
//bool IsEmpty(stack s)
//{
//	return (s->next == NULL);
//}
//
//ElenmenType PopStack(stack s)
//{
//	if (IsEmpty(s))
//	{
//		printf("ջ��\n");
//		return -1;
//	}
//	else
//	{
//		ElenmenType tmp = s->data;
//		stack temp = s->next;
//		s->next = temp->next;
//		free(temp);
//		return tmp;
//	}
//}
//
//void Print(stack s)
//{
//	while (s->next != NULL)
//	{
//		stack cur = s;
//		printf("%d ", cur->data);
//		cur->next = cur->next->next;
//	}
//}
//
//int main()
//{
//	stack s = InitStack();
//	PushStack(s, 1);
//	Print(s);
//	PushStack(s, 2);
//	Print(s);
//	PushStack(s, 3);
//	Print(s);
//	int a=PopStack(s);
//	Print(s);
//	int b=PopStack(s);
//	Print(s);
//	return 0;
//}

//���е�ʵ��
//��������
//typedef int ElementType;
//typedef struct QNode
//{
//	ElementType* data;
//	int rear, front;
//	int maxsize;
//}QNode;
//typedef QNode* Queue;
//
//Queue CreatQueue(int maxsize)
//{
//	Queue q = (Queue)malloc(sizeof(QNode));
//	q->data = (ElementType*)malloc(maxsize * sizeof(ElementType));
//	q->front = q->rear = 0;
//	q->maxsize = maxsize;
//	return q;
//}
//
//bool IsFull(Queue q)
//{
//	return(((q->rear + 1) % q->maxsize) == q->front);
//}
//
//bool IsEmpty(Queue q)
//{
//	return (q->front == q->rear);
//}
//
//bool AddQueue(Queue q, ElementType x)
//{
//	if (IsFull(q))
//	{
//		printf("��������\n");
//		return false;
//	}
//	else
//	{
//		q->rear = (q->rear + 1) % q->maxsize;
//		q->data[q->rear] = x;
//	}
//}
//
//ElementType DeleteQueue(Queue q)
//{
//	if (IsEmpty(q))
//	{
//		printf("���п�\n");
//		return -1;
//	}
//	else
//	{
//		q->front = (q->front + 1) % q->maxsize;
//		return (q->data[q->front]);
//	}
//}
//
//void Print(Queue q)
//{
//	int cur = q->front;
//	while (cur != q->rear)
//	{
//		printf("%d ", q->data[cur+1]);
//		cur++;
//	}
//}
//
//int main()
//{
//	Queue q = CreatQueue(10);
//	AddQueue(q, 1);
//	Print(q);
//	AddQueue(q, 2);
//	Print(q);
//	AddQueue(q, 3);
//	Print(q);
//	DeleteQueue(q);
//	Print(q);
//	DeleteQueue(q);
//	Print(q);
//	return 0;
//}


//��������
//typedef int ElementType;
//typedef struct Node
//{
//	ElementType data;
//	struct Node* next;
//}Node;
//typedef struct QNode
//{
//	struct Node* rear;
//	struct Node* front;
//}QNode;
//typedef QNode* Queue;
//
//void InitQueue(Queue q)
//{
//	q->front = q->rear = (Node*)malloc(sizeof(Node));
//	q->rear->next = NULL;
//}
//
//void DestroyQueue(Queue q)
//{
//	while (q->front)
//	{
//		Node* cur = q->front;
//		q->front = q->front->next;
//		free(cur);
//		cur = q->front;
//	}
//	//while (q->front)
//	//{
//	//	q->rear = q->front->next;
//	//	free(q->front);
//	//	q->front = q->rear;
//	//}
//}
//
//void AddQueue(Queue q, ElementType x)
//{
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = x;
//	p->next = q->rear->next;
//	q->rear->next = p;
//	q->rear = p;
//}
//
//ElementType DeleteQueue(Queue q)
//{
//	if (q->front = q->rear)
//	{
//		printf("���п�\n");
//		return (ElementType)strerror(errno);
//	}
//	else
//	{
//
//	}
//}
//
//int main()
//{
//	return 0;
//}

//�����ת��
//�����ת��
//int main()
//{
//	int i = 0, j = 0;
//	//printf("��������������������\n");
//	//scanf("%d%d", &m, &n);
//	int arr[4][4];
//	printf("�����������и��е�Ԫ�أ�\n");
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	printf("�˾���Ϊ��\n");
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%-2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			int temp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = temp;
//		}
//	}
//	printf("���ú�ľ���Ϊ��\n");
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%-2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//�Ƿ����ת��
//int main()
//{
//	int i, j;
//	int arr[2][3];
//	int arr2[3][2];
//	printf("������ԭ������и��е�Ԫ�أ�\n");
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d ", &arr[i][j]);
//		}
//	}
//	printf("ԭ����Ϊ��\n");
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//			arr2[i][j] = arr[j][i];
//	}
//	printf("���ú�ľ���Ϊ��\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//BF�㷨

//int BF(const char* str,const char* sub)//Ϊʲôһ��Ҫ��const��������
//{
//	assert(str);
//	assert(sub);
//	int i = 0;
//	int j = 0;
//	while (i < strlen(str) && j < strlen(sub))
//	{
//		if (str[i] == sub[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = 0;//��ƥ�����ִ���0�����¿�ʼƥ��
//			i = i - j + 1;//ע��˱��ʽ��д����ʵ���Զ�����
//		}
//	}
//	if (j == strlen(sub))
//	{
//		return i - j;
//	}
//	return -1;
//}
//
//int main()
//{
//	char arr1[] = { "abababc" };
//	char arr2[] = { "abc" };
//	printf("%d", BF("abababc", "abc"));//���������ַ����鴫�λ�����
//	return 0;
//}


//������ǵĶ���ʵ��

//typedef int ElemenntType;
//typedef struct QNode
//{
//	int front;
//	int rear;
//	int maxsize;
//	ElemenntType* data;
//}QNode;
//typedef QNode* Queue;
//
//void InitQueue(Queue q,int maxsize)
//{
//	q->front = q->rear = 0;
//	q->maxsize = maxsize;
//	q->data = (ElemenntType*)malloc(q->maxsize * sizeof(ElemenntType));
//}
//
//bool IsFull(Queue q)
//{
//	return ((q->front + 1) % q->maxsize == q->rear);
//}
//
//bool IsEmpty(Queue q)
//{
//	return (q->front == q->rear);
//}
//
//void PushQueue(Queue q, ElemenntType x)
//{
//	if (IsFull(q))
//	{
//		printf("���������޷�����С�\n");
//		exit(-1);
//	}
//	else
//	{
//		q->rear = (q->rear + 1) % q->maxsize;
//		q->data[(q->rear)] = x;
//	}
//}
//
//ElemenntType PopQueue(Queue q)
//{
//	if (IsEmpty(q))
//	{
//		printf("���пգ��޷������С�\n");
//		exit(-1);
//	}
//	else
//	{
//		q->front = (q->front + 1) % q->maxsize;
//		return q->data[(q->front)];
//	}
//}
//
//ElemenntType GetQueue(Queue q)
//{
//	return q->data[q->rear];
//}
//
//void YHTiangle(int line)
//{
//	Queue q;
//	InitQueue(q, 2 * line - 1);
//	int temp = 0;
//	int value;
//	PushQueue(q, 1);
//	PushQueue(q, 1);
//	PushQueue(q, 0);
//	for (int i = 0; i < line;)
//	{
//		value = PopQueue(q);
//		PushQueue(q, (value + temp));
//		if (value != 0)
//		{
//			printf("%d ", value);
//		}
//		else
//		{
//			printf("\n");
//			PushQueue(q, 0);
//			i++;
//		}
//		temp = value;
//
//	}
//}
//
//int main()	
//{
//	int line;
//	printf("����������ǵ�������\n");
//	scanf("%d", &line);
//	YHTiangle(line);
//	return 0;
//}

//��Ԫ�����ת��


