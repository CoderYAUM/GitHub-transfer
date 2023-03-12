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
//	printf("                欢迎进入超市信息管理系统\n");
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
//			printf("库存信息已存在\n");
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
//			printf("感谢您的使用，再见！\n");
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
//	printf("\n\n请选择下面的数字进行操作：\n");
//	printf("--------------------------------------------\n");
//	printf("1. 文件建立库存信息\n");
//	printf("2. 手动建立库存信息\n");
//	printf("3. 显示所有商品信息\n");
//	printf("4. 购物车\n");
//	printf("5. 结算\n");
//	printf("6. 退出程序\n");
//	printf("--------------------------------------------\n");
//	printf("请选择对应数字1~6（1,2选其一）\n");
//	printf("本程序制作人: 2017物联网工程 胡斌、刘萌欣、陈俊飞\n");
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
//			printf("输入错误，请重新输入：\n");
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
//		printf("创建文件失败\n");
//		return;
//	}
//	
//	fprintf(fp, "69011111 飘柔日常护理 12.00 15.00 30\n");
//	fprintf(fp, "69021111 优酸乳 1.50 2.00 200\n");
//	fprintf(fp, "69031111 红富士苹果 2.50 3.50 300\n");
//	fprintf(fp, "69041111 晨光笔芯 0.70 1.00 150\n");
//	fprintf(fp, "69051111 胡医生面膜 12.00 16.50 100\n");
//	fclose(fp);
//	printf("成功导入信息\n");
//	return;
//}
//
//
//void ShouJianKucun()
//{
//	FILE* fp;
//	int i;
//	printf("请依次输入货物信息：\n");
//	printf("--------------------------------------------\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("第%d个商品：\n", i + 1);
//		printf("货号：");
//		fflush(stdin);
//		gets(goods[i].ID);
//
//		printf("品名：");
//		fflush(stdin);
//		gets(goods[i].brand);
//
//		printf("进价: ");
//		fflush(stdin);//清空输入流
//		scanf("%lf", &goods[i].inprice);//输入进价 
//
//		printf("售价：");
//		fflush(stdin);//清空输入流
//		scanf("%lf", &goods[i].outprice);//输入售价 
//
//		printf("数量：");
//		fflush(stdin);//清空输入流
//		scanf("%d", &goods[i].storage);//输入数量 
//		printf("\n");
//	}
//	if ((fp = fopen("kucun.txt", "w")) == NULL)
//	{//判断文件是否创建失败
//		printf("创建文件失败。\n");
//		return;
//	}
//	for (i = 0; i < N; i++)
//	{//把货物信息写进文件
//		fprintf(fp, "%-11s%-15s%-8.3f%-8.3f%-7d\n", goods[i].ID, goods[i].brand, goods[i].inprice, goods[i].outprice, goods[i].storage);
//	}
//	
//	fclose(fp);
//	printf("信息导入成功\n");
//	return;
//}
//
//
//void DisKucun()
//{//显示库存信息函数
//	FILE* fp;//定义文件指针 
//	int i;
//	if ((fp = fopen("kucun.txt", "r")) == NULL)
//	{//判断是否打开了文件
//		printf("打开文件失败\n");
//		return;
//	}
//
//	for (i = 0; i < N; i++)
//	{//输出物品信息
//		//读取文件信息 
//		fscanf(fp, "%s%s%lf%lf%d", goods[i].ID, goods[i].brand, &goods[i].inprice, &goods[i].outprice, &goods[i].storage);
//		printf("--------------------------------------------\n");
//		//输出文件信息 
//		printf("货号       品名           单价    库存量\n");
//		printf("%-11s%-15s%-8.3f%-7d\n", goods[i].ID, goods[i].brand, goods[i].outprice, goods[i].storage);
//	}
//	fclose(fp);//关闭文件 
//}
//
//
//void  ShopCart()
//{//对购物车进行操作
//	while (1)
//	{
//		switch (ShopCartMenu())
//		{//ShopCartMenu()为输入选项
//		case 1: XianShi();
//			break;//选项1 显示购物车物品信息
//		case 2: add();
//			break;//选项2 添加购物车物品
//	//case 3: deleteitem();//删除购物车中的某项商品
//	//		break;
//		case 3: return;//选项3 退出 
//		}
//	}
//}
//
//
//int ShopCartMenu()
//{
//	int n;
//	char s[5];
//	printf("\n\n请选择操作：\n");
//	printf("--------------------------------------------\n");
//	printf("1. 显示当前可以购物列表\n");
//	printf("2. 在购物车里添加商品\n");
//	printf("3. 退出\n");
//	printf("--------------------------------------------\n");
//	printf("请选择对应数字1~3\n");
//
//
//	while (1)
//	{
//		fflush(stdin);
//		gets(s);
//		n = atoi(s);
//		if (n < 1 || n>3)
//			printf("输入错误，请重新输入: \n");
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
//		printf("打开文件失败\n");
//	}
//
//	if (p == NULL)
//	{
//		printf("目前购物车为空：");
//		return;
//	}
//	else
//	{
//		while (p != NULL)
//		{
//			printf("--------------------------------------------\n");
//			printf("货号       品名           单价    数量\n");
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
//		printf("输入所需物品的名称或货号：\n");
//		fflush(stdin); 
//		gets(s);
//		if ((fp = fopen("kucun.txt", "r")) == NULL)
//		{
//			printf("打开文件失败\n");
//			continue;
//		}
//		for (i = 0; i < N; i++)
//		{
//			fscanf(fp, "%s%s%*lf%lf%d", goods[i].ID, goods[i].brand, &goods[i].outprice, &goods[i].storage);
//
//			if ((strcmp(goods[i].ID, s) == 0 || strcmp(goods[i].brand, s) == 0) && goods[i].storage > 0
//			{
//				printf("已找到所需商品：\n");
//				printf("--------------------------------------------\n");
//				printf("货号       品名           单价    数量\n");
//				printf("%-11s%-15s%-8.3f%-7d\n", goods[i].ID, goods[i].brand, goods[i].outprice, goods[i].storage);
//
//				printf("请输入所需商品数量: ");
//				scanf("%d", &n);
//				if (n > goods[i].storage)
//				{
//					printf("该商品库存不足\n");
//					break;
//				}
//				printf("\n是否购买此商品？(Y/N)\n");
//				fflush(stdin);
//				scanf("%s", choice1);
//				if (strcmp(choice1, "Y") == 0 || strcmp(choice1, "y") == 0)
//				{
//					p = new node;
//					if (p == NULL)
//					{
//						printf("内存申请失败！\n");
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
//					printf("输入错误\n");
//				break;
//			}
//		}
//		if (i == N)
//			printf("未找到所需物品\n");
//		fclose(fp);
//
//		UpdateKu();
//		printf("是否继续购物?(Y/N)\n");
//		fflush(stdin);
//		scanf("%s", choice2);
//		if (strcmp(choice2, "y") != 0 && strcmp(choice2, "Y") != 0)
//			printf("放弃购买，返回菜单！\n");
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
//		printf("创建文件失败。\n");
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
//	printf("以下是购物清单：\n");
//	XianShi();
//
//
//	if ((fp = fopen("kucun.txt", "r")) == NULL)
//	{
//		printf("打开文件失败\n");
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
//	printf("总计：%-8.3f\n", sum);
//	printf("输入实付金额：");
//	scanf("%lf", &pay);
//	printf("实付：  %-8.3f    找零:    %8.3f\n", pay, pay - sum);
//
//	if ((fp = fopen("kucun.txt", "w")) == NULL)
//	{
//		printf("写入文件失败\n");
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