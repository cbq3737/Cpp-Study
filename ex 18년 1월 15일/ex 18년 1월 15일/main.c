//#include <stdio.h>
//#include <stdlib.h>
//void Swap(int* pa, int* pb)
//{
//	int t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//void main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Point
//{
//	int x;
//	int y;
//};
//void PrintPoint1(struct Point pt)
//{
//	printf("%d %d\n", pt.x, pt.y);
//}
//void PrintPoint2(struct Point* pt)
//{
//	printf("%d %d\n", (*pt).x, (*pt).y);
//}
//void main()
//{
//	struct Point pt = { 2,3 };
//
//	PrintPoint1(pt);
//	PrintPoint2(&pt);
//	system("pause");
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void InitArray(int(*arr)[5])
//{
//	int i, j;
//	for (i = 0; i < 5; ++i)
//	{
//		for (j = 0; j < 5; ++j)
//		{
//			arr[i][j] = i * 5 + j + 1;
//		}
//	}
//}
//void PrintArray(int(*arr)[5])
//{
//	int i, j;
//	for (i = 0; i < 5; ++i)
//	{
//		for (j = 0; j < 5; ++j)    //이것도 맞음
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void main()
//{
//	int arr[5][5] = { 0 };
//	
//	InitArray(arr);
//	PrintArray(arr);
//	/*int arr[5][5] = { 0 };
//	int i, j;
//	for (i = 0; i < 5; ++i)    //이것도 맞고
//	{
//		for (j = 0; j < 5; ++j)
//		{
//			arr[i][j] = i * 5 + j + 1;
//		}
//	}*/
//	/*for (i = 0; i < 5; ++i)
//	{
//		for (j = 0; j < 5; ++j)    //이것도 맞음
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	system("pause");



//#include <stdio.h>
//#include <stdlib.h>
//int TotalIntegerR(int s, int e)
//{
//	int i;
//	int sum = 0;
//	for (i = s; i <= e; ++i)
//	{
//		sum += i;
//	}
//	return sum;
//}
//void  TotalIntegerP(int s, int e,int* presult)
//{
//
//	int i;
//	int sum = 0;
//	for (i = s; i <= e; ++i)
//	{
//		sum += i;
//	}
//	*presult=sum;
//}
//void main()
//{
//	int result = 0;
//	result = TotalIntegerR(1, 100);
//	printf("result=%d\n", result);
//	TotalIntegerP(1, 100, &result);
//	printf("result=%d\n", result);
//	system("pause");
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//char* GetString()
//{
//	char* s = NULL;
//	char buf[500];
//	printf("문자열 입력");
//	gets_s(buf, 500);  //변수명,입력받을 문자갯수
//
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//	return s;
//}
//void main()
//{
//	char* str1 = NULL;
//	str1 = GetString();
//	printf("%s\n", str1);
//	free(str1);
//	system("pause");
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void main()
//{
//	char* s = "abc";
//	char arr[100] = "ABCED";
//
//	strcat_s(arr, 9, s);  //s문자열을 arr에 붙혀넣어라
//	strcpy_s(arr, 4, s); //arr문자열에 s를 복사해라.
//	printf("%s\n", arr);
//	printf("%d\n", strlen(arr));
//	system("pause");
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//void main()
//{
//	int* p = (int*)malloc(sizeof(int)*4);
//	p[0] = 10;
//	p[1] = 20;
//	p[2]=  30;
//	p[3] = 40;
//	printf("%d\n", p[0]);
//	printf("%d\n", p[1]);
//	printf("%d\n", p[2]);
//	printf("%d\n", p[3]);
//
//	free(p);
//	system("pause");
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//void PrintArray(int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		printf("%d\n",arr[i] );
//	}
//}
//void main()
//{
//	int arr[3] = { 10,20,30 };
//	PrintArray(arr, 3);
//	system("pause");
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void PrintInterger1(int a, int b)
//{
//	printf("%d %d\n",a, b);
//}
//void PrintInterger2(int* pa, int* pb)
//{
//	printf("%d %d\n", *pa,*pb);
//}
//void main()
//{
//	int a = 10;
//	int b = 20;
//	PrintInteger1(a,b);
//	PrintInterger2(&a, &b);
//
//	system("pause");
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void main()
//{
//	printf("%d\n", 4 | 6);
//	printf("%d\n", 4 & 6);
//	printf("%d\n", 4 ^ 6);
//	printf("%d\n", 4 || 6);
//	printf("%d\n", 4 && 6);
//	printf("%d\n", ~4);
//	system("pause");
//}