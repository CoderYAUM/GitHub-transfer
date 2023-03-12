#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#define MAXVALUE 32767		
#define NODENUM 10			
typedef struct
{
	char data;				
	int weight;				
	int parent, lch, rch;	
}htNode, * huffmanTree;

typedef char** huffmanCode;	

int initHuffmanTree(huffmanTree& HT);								
void creatHuffmanTree(huffmanTree& HT, int n);						
void createHuffmanCode(huffmanTree HT, huffmanCode& HC, int n);		
int main()
{
	huffmanTree HT;
	initHuffmanTree(HT);
	huffmanCode HC;
	creatHuffmanTree(HT, NODENUM);
	createHuffmanCode(HT, HC, NODENUM);
	for (int i = 1; i <= NODENUM; i++)								
	{
		printf("%c:\t", HT[i].data);
		printf("%s\n", HC[i]);
	}
	return 0;
}
int initHuffmanTree(huffmanTree& HT)
{
	HT = (htNode*)malloc(sizeof(htNode) * (2 * NODENUM));			
	for (int i = 1; i <= 2 * NODENUM - 1; i++)					
	{
		HT[i].parent = HT[i].lch = HT[i].rch = -1;					
	printf("please input some weight!\n");
	for (int i = 1; i <= NODENUM; i++)								
		scanf("%d", &HT[i].weight);									
	char c = getchar();											
	printf("please input some data!\n");
	for (int i = 1; i <= NODENUM; i++)
	{
	
		char a = getchar();
		if (a == '\n')												
			break;
		else
			HT[i].data = a;											
	}

	return 1;
}

	void creatHuffmanTree(huffmanTree & HT, int n)
	{
		if (n <= 1)
			return;
		int min1, min2;
		int rnode, lnode;
		for (int i = n + 1; i <= 2 * n - 1; i++)
		{
			int min1 = MAXVALUE; int lnode = -1;
			int min2 = MAXVALUE; int rnode = -1;
			for (int j = 1; j <= i - 1; j++)
			{
				if (HT[j].weight < min1 && HT[j].parent == -1)
				{
					min2 = min1;	rnode = lnode;
					min1 = HT[j].weight; lnode = j;
				}
				else if (HT[j].weight < min2 && HT[j].parent == -1)
				{
					min2 = HT[j].weight;
					rnode = j;
				}
			}
			HT[lnode].parent = HT[rnode].parent = i;
			HT[i].lch = lnode; HT[i].rch = rnode;
			HT[i].weight = HT[lnode].weight + HT[rnode].weight;
		}

	}

void createHuffmanCode(huffmanTree HT, huffmanCode& HC, int n)
{
	HC = (huffmanCode)malloc(sizeof(huffmanCode) * n + 1);				
																		
	char* cd = (char*)malloc(sizeof(char) * n);							
	int start = 0, c = 0, f = 0;											
	cd[n - 1] = '\0';													
	for (int i = 1; i <= n; i++)										
	{
		start = n - 1;												
		c = i;
		f = HT[c].parent;
		while (f != -1)													
		{
			start--;
			if (HT[f].lch == c)											
				cd[start] = '0';
			else
				cd[start] = '1';
			c = f; f = HT[c].parent;									
		}
		HC[i] = (char*)malloc(sizeof(char) * (n - start));				
		strcpy(HC[i], &cd[start]);										
	}
	free(cd);															
}
