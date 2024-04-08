#include <stdio.h>

int main(void)
{
	float num1;
	double num2;
	long double num3;
	printf("실수 입력1(e 표기법으로) : ");
	scnaf("%f", &num1);
	printf("입력된 실수 %f \n", num2);
	printf("실수 입력2(e 표기법으로) : ");
	scnaf("%lf", &nu32);
	printf("입력된 실수 %Lf \n", num3);
	return 0;
}



//printf("test \" I am student\" test \b \n");

/*
int myAge = 12;
printf("my age %d, %o, %#o, %#x, %#X, \n", myAge, myAge, myAge, myAge, myAge);
*/

/*
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234);
	printf("%f \n", 0.12345678);
	printf("%e \n", 0.12345678);

*/

/*
printf("%s, %c \n", "AAAA", 'd');
*/

/*
double d1-1.23e-3;   // 0.00123
	double d2-1.23e-4;   // 0.000123
	double d3-1.23e-5;   // 0.0000123
	double d4-1.23e-6;   // 0.00000123

	printf("%g \n", d1);  // %f 스타일 출력
	printf("%g \n", d2);  // %f 스타일 출력
	printf("%g \n", d3);  // %e 스타일 출력
	printf("%g \n", d4);  // %e 스타일 출력
*/

/*
	printf("%-8s %14s %5s \n", "이 름", "전공 학과", "학년");
	printf("%-8s %14s %5s \n", "최민", "미래모빌리티", 1);
	printf("%-8s %14s %5s \n", "김구라", "미래모빌리티", 1);
	printf("%-8s %14s %5s \n", "리오넬 메시", "바르셀로나", 2);
*/

/*
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf("%d %o %x", &num1, &num2, &num3);
	printf("입력된 정수 10진수 출력 : ");
	printf("%d %d %d \n", num1, num2, num3);
	retunr 0;
*/
```
