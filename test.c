#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>



//ö�� -- һһ�о�

//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ - ����
//	MALE,
//    FEMALE=9,
//	SECRET	
//};
//
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};
//
//int main()
//{
//	//enum Sex s = MALE;
//	//enum Color c = BLUE;
//	enum Color c = 2;//error
//	//printf("%d %d %d\n",RED,GREEN,BLUE);
//	//printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}













//���� -- ������ -- ������




//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}




//�жϵ�ǰ������Ĵ�С�˴洢

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	return 0;
//}







//enum�Ĵ�С

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n",sizeof(s));//4
//	return 0;
//}










//union�Ĵ�С


//union Un
//{
//	int a;
//	char arr[5];
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//8
//	return 0;
//}