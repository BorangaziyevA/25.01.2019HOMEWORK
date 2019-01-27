#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

void task10()
{
	int A[10], B[10], MaxA = 0, MaxB = 0, x, y,z;

	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 0 + rand() % 100;
		B[i] = 0 + rand() % 100;
		printf("A[%d] = %d ",i, A[i]);
	}

	printf("\n\n");

	for (size_t i = 0; i < 10; i++)
	{
		printf("B[%d] = %d ",i, B[i]);
	}

	for (size_t i = 0; i < 10; i++)
	{
		if (A[i] > MaxA)
		{
			MaxA = A[i];
			x = i;
		}
		if (B[i] > MaxB)
		{
			MaxB = B[i];
			y = i;
		}
	}
	printf("\nMaxA = %d\n", MaxA);
	printf("\nMaxB = %d\n", MaxB);

	z = B[y];
	B[y] = A[x];
	A[x] = z;

	for (size_t i = 0; i < 10; i++)
	{
		printf("A[%d] = %d ",i, A[i]);
	}

	printf("\n\n");

	for (size_t i = 0; i < 10; i++)
	{
		printf("B[%d] = %d ",i, B[i]);
	}
}

void task9()
{

	int A[15] = { 0 };
	int B[15] = { -10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10 };
	int x;

	for (size_t i = 0; i < 15; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("%d  ", A[i]);
	}

	for (size_t i = 0; i < 15; i++)
	{
		if (A[i] < A[i + 1])
		{
			B[i] = i;
		}
	}

	for (size_t i = 0; i < 14; i++)
	{
		if (B[i] != -10)
		{
			printf("\n%d\n", B[i]);
		}

	}
}

void task8()
{
	int A[10] = { 0 };
	int B[10] = { -100 };

	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("%d  ", A[i]);
	}

	printf("\n\n");
	
	for (size_t i = 0; i < 10; i++)
	{
		if (i == 9)
		{
			break;
		}
		B[i] = A[i] - A[i + 1];
	}

	for (size_t i = 0; i < 10; i++)
	{
		if (B[i] != 0)
		{
			printf("%d  ", B[i]);
		}
	}
}

void task7()
{
	int A[15] = { 0 };
	int B[15] = { 0 };
	int x;

	for (size_t i = 0; i < 15; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("%d  ", A[i]);
	}

	for (size_t i = 0; i < 15; i++)
	{
		if (A[i]>A[i+1])
		{
			B[i] = i;
		}
	}

	for (size_t i = 0; i < 14; i++)
	{
		if (B[i]!=0)
		{
			printf("\n%d\n", B[i]);
		}

	}
}

void task6()
{
	int A[10] = { 0 };
	int localMAX = 0;

	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("%d  ", A[i]);
	}

	for (size_t i = 0; i < 10; i++)
	{
		if (A[i] > A[i+1] && A[i] > A[i-1])
		{
			localMAX++;
		}
	}	

	printf("\nNumber of Local Numbers = %d\n", localMAX);
}

void task5()
{
	int A[14] = { 0 };
	int x = 13, y;

	for (size_t i = 0; i < 14; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("%d  ", A[i]);
	}

	printf("\n\n");

	for (size_t i = 0; i < 7; i++)
	{
		y = A[i];
		A[i] = A[x];
		A[x] = y;
		x--;
	}

	for (size_t i = 0; i < 14; i++)
	{
		printf("%d  ", A[i]);
	}
}

void task4()
{
	int A[10] = { 0 };
	int Cpro = 1, Npro = 1;

	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("A[%d] = %d\n", i, A[i]);

		if (i%2 == 0)
		{
			Cpro = Cpro * A[i];
		}
		else if (i % 2 == 1)
		{
			Npro = Npro * A[i];
		}
	}

	printf("\nProizvedenie chisel s chet. indeksami  = %d\n", Cpro);
	printf("\nProizvedenie chisel s nechet. indeksami  = %d\n", Npro);

}

void task3()
{
	int A[9] = { 0 }, sum = 0, B[9] = { 0 };

	for (size_t i = 0; i < 9; i++)
	{
		A[i] = 10 + rand() % 89;
		printf("A[%d] = %d\n", i, A[i]);
		sum = sum + A[i];
	}
	printf("\n\n\n\n");

	for (size_t i = 0; i < 9; i++)
	{
		B[i] = sum;
		printf("B[%d] = %d\n", i, B[i]);
	}
}

void task2()
{
	int A[9] = { 0 };
	int Max = 0;

	for (size_t i = 0; i < 9; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("%d\n", A[i]);
	}

	for (size_t i = 0; i < 9; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			if (A[j]>0 && A[j]%2 ==	1)
			{
				if (Max < A[j])
				{
					Max = A[j];
				}
			}

		}

	}

	printf("\nMax = %d\n", Max);
}

void task1()
{
	int B[9] = { 0 };
	int C[7] = { 0 };
	int F[16] = { 0 };
	int a = 0;

	for (size_t i = 0; i < 9; i++)
	{
		B[i] = 0 + rand() % 100;
		printf("B[%d] = %d\t", i, B[i]);
	}

	printf("\n");

	for (size_t i = 0; i < 7; i++)
	{
		C[i] = 0 + rand() % 100;
		printf("c[%d] = %d\t", i, C[i]);
	}

	printf("\n\n\n");

	for (size_t i = 0; i < 16; i++)
	{
		F[i] = B[i];
		if (i>8)
		{
			F[i] = C[a];
			a++;
		}
	}

	//for (size_t i = 0; i < 16; i++)
	//{
	//	printf("F[%d] = %d\t", i, F[i]);
	//}

	printf("\n\n\n\n");

	for (size_t i = 1; i < 16; i++)
	{
		for (size_t j = 1; j < 16; j++)
		{
			if (F[j]<F[j-1])
			{
				a = F[j];
				F[j] = F[j - 1];
				F[j - 1] = a;
			}

		}

	}

	for (size_t i = 0; i < 16; i++)
	{
		printf("F[%d] = %d\n", i, F[i]);
	}

}

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int task, flag;

	do
	{
		system("cls");
		printf("Task number:");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:task1(); break;
		case 2:task2(); break;
		case 3:task3(); break;
		case 4:task4(); break;
		case 5:task5(); break;
		case 6:task6(); break;
		case 7:task7(); break;
		case 8:task8(); break;
		case 9:task9(); break;
		case 10:task10(); break;
		}

		printf("Continue?1/0\n");
		scanf_s("%d", &flag);

	} while (flag != 0);
}