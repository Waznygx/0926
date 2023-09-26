#include<stdio.h>
//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	printf("a=%p\n", &a);
//	printf("f=%p\n", &f);
//	return 0;
//}
////输出：a=0000003215DCF8F4
////      f=0000003215DCF914

//int main()
//{
//	int arr1[10] = { 1,2,3,4 };//不完全初始化
//	int arr2[] = { 1,2,3,4 };//不完全初始化
//	int arr3[5] = { 1,2,3,4,5 };//完全初始化
//	char arr4[3] = { 'a',98,'r' };//完全初始化
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr1[] = { 'a','b','c' };
//	char arr2[] = "abc";
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
////输出：3
//		4
//		35
//		3

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for ( i = 0; i <= 10; i++)//当i=10判断，属于越界访问
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////输出：0 1 2 3 4 5 6 7 8 9 -858993460（越界访问输出的数值）

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}
////输出：0000002F6ADAFAA8
//0000002F6ADAFAA8
//0000002F6ADAFAA8

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}
////输出：-1
////按位取反 00000000 00000000 00000000 00000000
////    原码 11111111 11111111 11111111 11111111
////    反码 10000000 00000000 00000000 00000000
////    补码 10000000 00000000 00000000 00000001     

//int main()
//{
//	int a = 10;
//	int* p = NULL;
//	printf("%d ", !2);
//	printf("%d ", !0);
//	p = &a;
//	printf("%d ", sizeof(*p));
//	printf("%d ", sizeof(a));
//	return 0;
//}
////输出：0 1 4 4

//void test1(int arr1[])
//{
//	printf("%d\n", sizeof(arr1));
//}
//void test2(int arr2[])
//{
//	printf("%d\n", sizeof(arr2));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}
////输出：40
//10
//8
//8

//int main()
//{
//	int a = 10;
//	int x = --a;
//	int y = a+++a--;
//	printf("a=%d,x=%d,y=%d", a, x, y);
//	return 0;
//}
////输出：a=9,x=9,y=18

//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	i = a++ && ++b && d++;
//	printf("i=%d,a=%d,b=%d,c=%d,d=%d",i, a, b, c, d);
//	return 0;
//}
////输出：i=0,a=1,b=2,c=3,d=4

//#define CMP(x,y) (((x)>(y))?(x):(y))
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d", CMP(a,b));
//	return 0;
//}
////输出：5

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	//        假    a=2+10=12  12  b=12+1=13  
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
////输出：a=12,b=13,c=13

//int main()
//{
//	int arr[10];//创建数组
//	arr[9] = 10;//实用下标引用操作符
//	//[]的两个操作数是arr和9
//	return 0;
//}
//int test(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 3;
//	int b = 9;
//	test(a,b);//test：第一个操作数，()为函数调用操作符，a、b为第二个操作数
//	return 0;
//}

//typedef struct MyStruct
//{
//	int i; 
//	char c;
//}*s2;
//int main()
//{
//	struct MyStruct s1 = { 39,'c'};
//	struct MyStruct s = { 38,'h'};
//	struct MyStruct *s2 = &s;
//	printf("%d,%c\n", s1.i, s1.c);
//	printf("%d,%c", s2->i, s2->c);
//	return 0;
//}
////输出：39,c
//38, h

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//	{
//		printf("a");
//	}
//	if (b == 0xb600)
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c");
//	}
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
////输出：-126
//// 
////   a:char   0000 0011
////   b:char   0111 1111
////   （+）    1000 0010
////   c:char   1000 0010
////   int(补)  11111111 11111111 11111111 1000 0010
////   反码     11111111 11111111 11111111 1000 0001
////   原码     00000000 00000000 00000000 1111 1110
////      1       1  1  1 1 1 1 0
////   符号位    64+32+16+8+4+2+1=126

//long double
// double
// float
// unsigned long int
// long int
// unsigned int
// int 
// 
//int main()
//{
//	int a = 10;
//	int x = a+--a;
//	int y = a * x + a * a + x * x;
//	printf("a=%d,x=%d,y=%d", a, x, y);
//	return 0;
//}

//int f()
//{
//	static int i = 1;
//	return ++i;
//	//第一次 i=2，第二次 i=3 ,第三次 i=4
//}
//int main()
//{
//	int a = 0;
//	a = f() - f() * f();
//	printf("%d\n", a);
//	return 0;
//}
////调用：1.2-3*4 
////      2.4-3*2