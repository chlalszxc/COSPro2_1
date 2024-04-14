#include <stdio.h>

void example1(void);
void example2(void);

int main(void)
{
	FILE* fp;
	int i;
	int data1 = 0;
	double data2 = 0.0;
	char ch;

	fp = fopen("data3.txt", "rt");

	if (fp == NULL)
	{
		//printf("File Reading Error \n");
		puts("File Reading Error \n");
		return -1;
	}
	else
	{
		printf("File Reading Success \n");
	}

	for (i = 0; i < 2; i++)
	{
		//ch = fgetc(fp);
		fscanf(fp, "%d", &data1);
		printf("%d\n", data1);
	}
	for (i = 0; i < 2; i++)
	{
		//ch = fgetc(fp);
		fscanf(fp, "%lf", &data2);
		printf("%lf\n", data2);
	}
	fclose(fp);

	return 1;
}

void example1(void)
{
	FILE* fp;

	fp = fopen("data2.txt", "wt");

	if (fp == NULL)
	{
		//printf("File Writing Error \n");
		puts("File Writing Error \n");
		return;
	}
	else
	{
		printf("File Writing Success \n");
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fputs("\nDEF\n", fp);
	//fprintf(fp, "A");
	printf("%d\n", fclose(fp));

	return;
}

void example2(void)
{
	FILE* fp;

	int i = 0;
	char ch = 0;

	fp = fopen("data2.txt", "rt");

	if (fp == NULL)
	{
		//printf("File Reading Error \n");
		puts("File Reading Error \n");
		return ;
	}
	else
	{
		printf("File Reading Success \n");
	}

	for (i = 0; i <= 6; i++)
	{
		//ch = fgetc(fp);
		fscanf(fp, "%c", &ch);
		printf("%c\n", ch);
	}
	fclose(fp);

	return;
}
