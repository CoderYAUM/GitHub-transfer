//#define _CRT_SECURE_NO_WARNINGS 1
//#ifndef MARKET_H
//#define MARKET_H
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<time.h>
//#include<conio.h>
//#include<windows.h>
//#define N 5
//
//struct mar
//{
//	char ID[10];
//	char brand[20];
//	double inprice;
//	double outprice;
//	int storage;
//};
//
//struct node
//{
//	struct mar buy;
//	int number;
//	struct node* next;
//};
//
//struct mar goods[N];
//struct node* cart;
//
//int menu();
//void WenJianKucun();
//void ShouJianKucun();
//void DisKucun();
//void ShopCart();
//int ShopCartMenu();
//void XianShi();
//void add();
//void UpdateKu();
//void  calculate();
//
//#endif
//
//
//int main()
//{
//	printf("*********************************************************\n");
//	printf("                ��ӭ���볬����Ϣ����ϵͳ\n");
//	printf("*********************************************************\n");
//	int find = 0;
//
//	while (1)
//	{
//		switch (menu())
//		{
//		case 1: WenJianKucun();
//			find = 1;
//			break;
//
//		case 2:	if (find == 0)
//			ShouJianKucun();
//			  else
//			printf("�����Ϣ�Ѵ���\n");
//			break;
//
//		case 3: DisKucun();
//			break;
//
//		case 4: ShopCart();
//			break;
//
//		case 5: calculate();
//			break;
//
//		case 6: system("cls");
//			printf("��л����ʹ�ã��ټ���\n");
//			Sleep(2000);
//			exit(0);
//		}
//	}
//	return 0;
//}
//
//
//int menu()
//{
//	char s[5];
//	int n;
//	printf("\n\n��ѡ����������ֽ��в�����\n");
//	printf("--------------------------------------------\n");
//	printf("1. �ļ����������Ϣ\n");
//	printf("2. �ֶ����������Ϣ\n");
//	printf("3. ��ʾ������Ʒ��Ϣ\n");
//	printf("4. ���ﳵ\n");
//	printf("5. ����\n");
//	printf("6. �˳�����\n");
//	printf("--------------------------------------------\n");
//	printf("��ѡ���Ӧ����1~6��1,2ѡ��һ��\n");
//	printf("������������: 2017���������� �������������¿���\n");
//
//
//	while (1)
//	{
//		fflush(stdin);
//		gets(s);
//		n = atoi(s);
//
//
//		if (n < 1 || n>6)
//			printf("����������������룺\n");
//		else
//			break;
//	}
//	return n;
//}
//
//
//void WenJianKucun()
//{
//	FILE* fp;
//	if ((fp = fopen("kucun.txt", "w")) == NULL)
//	{
//		printf("�����ļ�ʧ��\n");
//		return;
//	}
//	
//	fprintf(fp, "69011111 Ʈ���ճ����� 12.00 15.00 30\n");
//	fprintf(fp, "69021111 ������ 1.50 2.00 200\n");
//	fprintf(fp, "69031111 �츻ʿƻ�� 2.50 3.50 300\n");
//	fprintf(fp, "69041111 �����о 0.70 1.00 150\n");
//	fprintf(fp, "69051111 ��ҽ����Ĥ 12.00 16.50 100\n");
//	fclose(fp);
//	printf("�ɹ�������Ϣ\n");
//	return;
//}
//
//
//void ShouJianKucun()
//{
//	FILE* fp;
//	int i;
//	printf("���������������Ϣ��\n");
//	printf("--------------------------------------------\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("��%d����Ʒ��\n", i + 1);
//		printf("���ţ�");
//		fflush(stdin);
//		gets(goods[i].ID);
//
//		printf("Ʒ����");
//		fflush(stdin);
//		gets(goods[i].brand);
//
//		printf("����: ");
//		fflush(stdin);//���������
//		scanf("%lf", &goods[i].inprice);//������� 
//
//		printf("�ۼۣ�");
//		fflush(stdin);//���������
//		scanf("%lf", &goods[i].outprice);//�����ۼ� 
//
//		printf("������");
//		fflush(stdin);//���������
//		scanf("%d", &goods[i].storage);//�������� 
//		printf("\n");
//	}
//	if ((fp = fopen("kucun.txt", "w")) == NULL)
//	{//�ж��ļ��Ƿ񴴽�ʧ��
//		printf("�����ļ�ʧ�ܡ�\n");
//		return;
//	}
//	for (i = 0; i < N; i++)
//	{//�ѻ�����Ϣд���ļ�
//		fprintf(fp, "%-11s%-15s%-8.3f%-8.3f%-7d\n", goods[i].ID, goods[i].brand, goods[i].inprice, goods[i].outprice, goods[i].storage);
//	}
//	
//	fclose(fp);
//	printf("��Ϣ����ɹ�\n");
//	return;
//}
//
//
//void DisKucun()
//{//��ʾ�����Ϣ����
//	FILE* fp;//�����ļ�ָ�� 
//	int i;
//	if ((fp = fopen("kucun.txt", "r")) == NULL)
//	{//�ж��Ƿ�����ļ�
//		printf("���ļ�ʧ��\n");
//		return;
//	}
//
//	for (i = 0; i < N; i++)
//	{//�����Ʒ��Ϣ
//		//��ȡ�ļ���Ϣ 
//		fscanf(fp, "%s%s%lf%lf%d", goods[i].ID, goods[i].brand, &goods[i].inprice, &goods[i].outprice, &goods[i].storage);
//		printf("--------------------------------------------\n");
//		//����ļ���Ϣ 
//		printf("����       Ʒ��           ����    �����\n");
//		printf("%-11s%-15s%-8.3f%-7d\n", goods[i].ID, goods[i].brand, goods[i].outprice, goods[i].storage);
//	}
//	fclose(fp);//�ر��ļ� 
//}
//
//
//void  ShopCart()
//{//�Թ��ﳵ���в���
//	while (1)
//	{
//		switch (ShopCartMenu())
//		{//ShopCartMenu()Ϊ����ѡ��
//		case 1: XianShi();
//			break;//ѡ��1 ��ʾ���ﳵ��Ʒ��Ϣ
//		case 2: add();
//			break;//ѡ��2 ��ӹ��ﳵ��Ʒ
//	//case 3: deleteitem();//ɾ�����ﳵ�е�ĳ����Ʒ
//	//		break;
//		case 3: return;//ѡ��3 �˳� 
//		}
//	}
//}
//
//
//int ShopCartMenu()
//{
//	int n;
//	char s[5];
//	printf("\n\n��ѡ�������\n");
//	printf("--------------------------------------------\n");
//	printf("1. ��ʾ��ǰ���Թ����б�\n");
//	printf("2. �ڹ��ﳵ�������Ʒ\n");
//	printf("3. �˳�\n");
//	printf("--------------------------------------------\n");
//	printf("��ѡ���Ӧ����1~3\n");
//
//
//	while (1)
//	{
//		fflush(stdin);
//		gets(s);
//		n = atoi(s);
//		if (n < 1 || n>3)
//			printf("�����������������: \n");
//		else
//			break;
//	}
//	return n;
//}
//
//
//void XianShi()
//{
//	struct node* p; 
//	p = cart;
//	FILE* fp1;
//	if ((fp1 = fopen("cart.txt", "r")) == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//	}
//
//	if (p == NULL)
//	{
//		printf("Ŀǰ���ﳵΪ�գ�");
//		return;
//	}
//	else
//	{
//		while (p != NULL)
//		{
//			printf("--------------------------------------------\n");
//			printf("����       Ʒ��           ����    ����\n");
//			printf("%-11s%-15s%-8.3f%-7d\n", p->buy.ID, p->buy.brand, p->buy.outprice, p->number);
//			p = p->next;
//		}
//	}
//	fclose(fp1);
//	return;
//}
//
//
//void add()
//{
//	FILE* fp, * fp1;
//	struct node* p1, * p, * p2;
//	int i, n;
//	char s[20];
//	char choice1[20], choice2[20];
//
//
//	do {
//		printf("����������Ʒ�����ƻ���ţ�\n");
//		fflush(stdin); 
//		gets(s);
//		if ((fp = fopen("kucun.txt", "r")) == NULL)
//		{
//			printf("���ļ�ʧ��\n");
//			continue;
//		}
//		for (i = 0; i < N; i++)
//		{
//			fscanf(fp, "%s%s%*lf%lf%d", goods[i].ID, goods[i].brand, &goods[i].outprice, &goods[i].storage);
//
//			if ((strcmp(goods[i].ID, s) == 0 || strcmp(goods[i].brand, s) == 0) && goods[i].storage > 0
//			{
//				printf("���ҵ�������Ʒ��\n");
//				printf("--------------------------------------------\n");
//				printf("����       Ʒ��           ����    ����\n");
//				printf("%-11s%-15s%-8.3f%-7d\n", goods[i].ID, goods[i].brand, goods[i].outprice, goods[i].storage);
//
//				printf("������������Ʒ����: ");
//				scanf("%d", &n);
//				if (n > goods[i].storage)
//				{
//					printf("����Ʒ��治��\n");
//					break;
//				}
//				printf("\n�Ƿ������Ʒ��(Y/N)\n");
//				fflush(stdin);
//				scanf("%s", choice1);
//				if (strcmp(choice1, "Y") == 0 || strcmp(choice1, "y") == 0)
//				{
//					p = new node;
//					if (p == NULL)
//					{
//						printf("�ڴ�����ʧ�ܣ�\n");
//						exit(1);
//					}
//					p->number = n;
//					p->buy = goods[i];
//					p->next = NULL;
//					p1 = cart;
//					if (cart == NULL)
//						cart = p;
//					else
//					{
//						while (p1->next != NULL)
//							p1 = p1->next;
//						p->next = p1->next;
//						p1->next = p;
//					}
//				}
//				else
//					printf("�������\n");
//				break;
//			}
//		}
//		if (i == N)
//			printf("δ�ҵ�������Ʒ\n");
//		fclose(fp);
//
//		UpdateKu();
//		printf("�Ƿ��������?(Y/N)\n");
//		fflush(stdin);
//		scanf("%s", choice2);
//		if (strcmp(choice2, "y") != 0 && strcmp(choice2, "Y") != 0)
//			printf("�������򣬷��ز˵���\n");
//
//	} while (strcmp(choice2, "y") == 0 || strcmp(choice2, "Y") == 0);
//	return;
//}
//
//void UpdateKu()
//{
//	FILE* fp;
//	struct node* p;
//	if ((fp = fopen("cart.txt", "w")) == NULL)
//	{
//		printf("�����ļ�ʧ�ܡ�\n");
//		return;
//	}
//	p = cart;
//	while (p != NULL)
//	{
//		fprintf(fp, "%-11s%-15s%-8.3f%-7d\n", p->buy.ID, p->buy.brand, p->buy.outprice, p->number);
//		p = p->next;
//	}
//	fclose(fp);
//
//	return;
//}
//
//
//void calculate()
//{
//	struct node* p;
//	p = cart;
//	double sum = 0;
//	double pay;
//	FILE* fp;
//	int i;
//	printf("�����ǹ����嵥��\n");
//	XianShi();
//
//
//	if ((fp = fopen("kucun.txt", "r")) == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//		return;
//	}
//
//	for (i = 0; i < N; i++)
//	{
//		fscanf(fp, "%s%s%*lf%lf%d", goods[i].ID, goods[i].brand, &goods[i].outprice, &goods[i].storage);
//	}
//	fclose(fp);
//
//	while (p != NULL)
//	{
//		sum = sum + p->buy.outprice * p->number;
//		for (i = 0; i < N; i++)
//		{
//			if (strcmp(goods[i].ID, p->buy.ID) == 0)
//			{
//				goods[i].storage = goods[i].storage - p->number;
//				break;
//			}
//		}
//		p = p->next;
//	}
//
//	printf("�ܼƣ�%-8.3f\n", sum);
//	printf("����ʵ����");
//	scanf("%lf", &pay);
//	printf("ʵ����  %-8.3f    ����:    %8.3f\n", pay, pay - sum);
//
//	if ((fp = fopen("kucun.txt", "w")) == NULL)
//	{
//		printf("д���ļ�ʧ��\n");
//		return;
//	}
//	for (i = 0; i < N; i++)
//	{
//		fprintf(fp, "%-11s%-15s%-8.3f%-8.3f%-7d\n", goods[i].ID, goods[i].brand, goods[i].inprice, goods[i].outprice, goods[i].storage);
//	}
//	fclose(fp);
//
//	return;
//}