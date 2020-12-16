//============================================================================
// Name        : maiantiem.c
// Author      : Nguyen Quoc Thuan
// Version     : 1.1
//============================================================================
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#define MAXSIZECHAR 100

/**********************************************************************
 * Name: len
 * get leng string
 **********************************************************************/
int len(char t[])
{
	int count = 0;
	while (1)
	{
		if (t[count] == '\0')
			return count;
		count++;
	}
}

/**********************************************************************
 * Name: computeqT
 **********************************************************************/
float computeqT(char t[], int s)
{
	printf("in computeqT: %d\n", s);
	int juice = s % 6;
	printf("in computeqT: %d\n", juice);

	switch (juice)
	{
	case 5:
		if (!strcmp(t, "Flood"))
		{
			return 0;
		}
		if (!strcmp(t, "Storm"))
		{
			return 0.05;
		}
		if (!strcmp(t, "Rain"))
		{
			return 0.1;
		}
		if (!strcmp(t, "Shower"))
		{
			return 0.15;
		}
		if (!strcmp(t, "Drizzle"))
		{
			return 0.2;
		}
		if (!strcmp(t, "Cloudy"))
		{
			return 0.25;
		}
		break;
	case 4:
		if (!strcmp(t, "Flood"))
		{
			return -0.05;
		}
		if (!strcmp(t, "Storm"))
		{
			return 0;
		}
		if (!strcmp(t, "Rain"))
		{
			return 0.05;
		}
		if (!strcmp(t, "Shower"))
		{
			return 0.1;
		}
		if (!strcmp(t, "Drizzle"))
		{
			return 0.15;
		}
		if (!strcmp(t, "Cloudy"))
		{
			return 0.20;
		}
		break;
	case 0:
		if (!strcmp(t, "Flood"))
		{
			return -0.1;
		}
		if (!strcmp(t, "Storm"))
		{
			return -0.05;
		}
		if (!strcmp(t, "Rain"))
		{
			return 0;
		}
		if (!strcmp(t, "Shower"))
		{
			return 0.05;
		}
		if (!strcmp(t, "Drizzle"))
		{
			return 0.1;
		}
		if (!strcmp(t, "Cloudy"))
		{
			return 0.15;
		}
		break;
	case 1:
		if (!strcmp(t, "Flood"))
		{
			return -0.15;
		}
		if (!strcmp(t, "Storm"))
		{
			return -0.1;
		}
		if (!strcmp(t, "Rain"))
		{
			return -0.05;
		}
		if (!strcmp(t, "Shower"))
		{
			return 0;
		}
		if (!strcmp(t, "Drizzle"))
		{
			return 0.05;
		}
		if (!strcmp(t, "Cloudy"))
		{
			return 0.1;
		}
		break;
	case 2:
		if (!strcmp(t, "Flood"))
		{
			return -0.2;
		}
		if (!strcmp(t, "Storm"))
		{
			return -0.15;
		}
		if (!strcmp(t, "Rain"))
		{
			return -0.1;
		}
		if (!strcmp(t, "Shower"))
		{
			return -0.05;
		}
		if (!strcmp(t, "Drizzle"))
		{
			return 0;
		}
		if (!strcmp(t, "Cloudy"))
		{
			return 0.5;
		}
		break;
	case 3:
		if (!strcmp(t, "Flood"))
		{
			return -0.25;
		}
		if (!strcmp(t, "Storm"))
		{
			return -0.2;
		}
		if (!strcmp(t, "Rain"))
		{
			return -0.15;
		}
		if (!strcmp(t, "Shower"))
		{
			return -0.1;
		}
		if (!strcmp(t, "Drizzle"))
		{
			return -0.05;
		}
		if (!strcmp(t, "Cloudy"))
		{
			return 0;
		}
		break;
	}
}

/**********************************************************************
 * Name: triangular
 **********************************************************************/
int triangular(int n)
{
	return (n * (n + 1)) / 2;
}

/**********************************************************************
 * Name: computeqgS
 **********************************************************************/
float computeqgS(int s)
{
	int juice = s % 6;
	switch (juice)
	{
	case 0:
		return s / 2;
	case 1:
		return 2 * s;
	case 2:
		return -pow((s % 9), 3) / 5.0;
	case 3:
		return -pow((s % 30), 2) + 3 * s;
	case 4:
		return -s;
	case 5:
		return -1 * triangular((s % 5) + 5);
	}
}

/**********************************************************************
 * Name: isPrime
 **********************************************************************/
int isPrime(int number)
{
	int count = 0;
	for (int i = 1; i <= number; i++)
		if (!(number % i))
			count++;
	if (count == 2)
		return 1;
	return 0;
}

/**********************************************************************
 * Name: computeP1
 **********************************************************************/
int computeP1(int hp)
{
	if (isPrime(hp))
		return 1000;
	return hp;
}

/**********************************************************************
 * Name: computeP2
 **********************************************************************/
int computeP2(int hp, int d, int s)
{
	if (isPrime(hp))
		return (hp + s) % 1000;
	return (hp + d) % 100;
}

/**********************************************************************
 * Name: computeRanCan
 **********************************************************************/
float computeRanCan(int d, int p1, int p2)
{
	return (d + p1 + p2) / 1000.0;
}

/**********************************************************************
 * Name: computeRanCan
 **********************************************************************/
int isFibo(int num)
{
	int first = 1, second = 1;
	while (1)
	{
		int next = first + second;
		first = second;
		second = next;

		if (num == first || num == second)
			return 1;
		if (num < first)
			return 0;
	}
}

/**********************************************************************
 * Name: computeF
 **********************************************************************/
float computeF(int hp, int d, int s, char t[])
{
	int isFi = isFibo(d + s);
	if (d < 200 && !isFi)
	{
		return 0;
	}
	else if (d <= 800)
	{
		printf("int computeF : \n%f\n", (40 - (abs(d - 500) / 20.0) + computeqgS(s)) * (1 + computeqT(t, s)));
		return (40.0 - (abs(d - 500) / 20.0) + computeqgS(s)) * (1.0 + computeqT(t, s));
	}
	else
	{
		return (-d * s) / 1000.0;
	}
}

/**********************************************************************
 * Ham: computep
**********************************************************************/
float computep(int hp, int d, int s, char t[])
{
	int p1 = computeP1(hp);
	int p2 = computeP2(hp, d, s);
	if (d >= 200 && d < 300)
	{
		float shake = computeRanCan(d, p1, p2);
		if (shake > 0.8)
			return 0;
		else if (shake > 0.6)
		{
			hp -= 50;
			p1 = hp;
			p2 = (hp + d) % 100;
		}
		else if (shake > 0.4)
		{
			hp -= 40;
			p1 = hp;
			p2 = (hp + d) % 100;
		}
		else if (shake > 0.2)
		{
			hp -= 20;
			p1 = hp;
			p2 = (hp + d) % 100;
		}
	}

	float f = computeF(hp, d, s, t);
	float p = (p1 + p2 * f) / (1000.0 + abs(p2 * f));
	if (p > 1)
		return 1;

	if (p < 0)
		return 0;

	return p;
}
/**********************************************************************
 * Ham: read_File
 * Sinh vien can hoan chinh ham doc_File de thuc hien viec doc gia tri file input.inp
**********************************************************************/
int doc_File(int *hp, int *d, int *s, char t[])
{
	//sinh vien viet code de thuc hien viec doc cac gia tri tu file input.inp tai thu muc lam viec
	FILE *fi = fopen("input1.inp", "r");
	fscanf(fi, "%d%d%d", hp, d, s);
	fgets(t, MAXSIZECHAR, fi);

	printf("in doc: %d %d %d %s\n", *hp, *d, *s, t);
	printf("in doc: %s\n", t);

	// remove space first
	for (int i = 0; i < len(t); i++)
		if (t[i + 1] == '\n')
			t[i] = '\0';
		else
			t[i] = t[i + 1];

	fclose(fi);
	return 1;
}

/**********************************************************************
 * Ham: ghi_File
 * Sinh vien can hoan chinh ham ghi_file de thuc hien viec ghi ket qua p vao file output.out tai thu muc lam viec
**********************************************************************/
void ghi_File(int p)
{
	//sinh vien viet code de thuc hien viec ghi ket qua p vao file output.out tai thu muc lam viec
}

/**********************************************************************
 * Name: main
 * Target: Implements your application
 **********************************************************************/
int main()
{
	int hp = 0, d = 0, s = 0;
	char t[MAXSIZECHAR];
	float P1 = 0, P2 = 0, p = -1;

	if (doc_File(&hp, &d, &s, t))
	{
		//sinh vien viet code thuc hien tinh theo yeu cau de bai

		printf("%d\n", len(t));
		for (int i = 0; i < len(t); i++)
			printf("%c ", t[i]);

		printf("\n%d\n", s);
		printf("%d\n", s % 6);
		printf("%f", computeqT(t, s));
		if (isFibo(3))
			printf("\ntrue\n");

		printf("\nF = %f\n", computeF(hp, d, s, t));

		printf("\n%d\n", isPrime(hp));

		printf("\np = %f\n", computep(hp, d, s, t));
	}

	ghi_File(p);

	return 2020;
}
