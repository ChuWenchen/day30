#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//    int y, m, d;
//    scanf("%4d%2d%2d", &y, &m, &d);
//    printf("year=%04d\nmonth=%02d\ndate=%02d\n", y, m, d);
//    return 0;
//}


//int main()
//{
//    int a, b, c;
//    scanf("%d,%d", &a, &b);
//    printf("a=%d,b=%d\n", a, b);
//    c = a;
//    a = b;
//    b = c;
//    printf("a=%d,b=%d\n", a, b);
//    return 0;
//}


#include<stdio.h>
int main()
{
    int c;
    c=getchar();
    while ((getchar()) != EOF)
    {
        printf("%c\n", c + 32);
        getchar();
    }

    return 0;
}