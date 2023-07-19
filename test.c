#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>



//枚举 -- 一一列举

//枚举类型
//enum Sex
//{
//	//枚举的可能取值 - 常量
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













//联合 -- 联合体 -- 共用体




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




//判断当前计算机的大小端存储

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
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}







//enum的大小

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










//union的大小


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