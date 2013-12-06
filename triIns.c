#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void affiche(int[]);

int main()
{
	int A[N];
	int i, j, temp = 0, compt1 = 0, compt2 = 0;
	srand(time(NULL));
	
	for(i =0; i <N; i++)
	{
		//A[i] = rand()%10;
		A[i] = i;
		//A[i] = N - i;
	}
	affiche(A);
	
	j = 1;
	i = 0;
	while( j < N)
	{
		temp = A[j];
		i = j-1;
		while(( i >= 0) && (A[i] > temp))
		{
			A[i + 1] = A[i];
			i--;
			compt2++;
		}
		A[i + 1] = temp;
		j++;
		compt1++;
	}
	affiche(A);
	printf("\n\nBoucle 1 : %d", compt1);
	printf("\n\nBoucle 2 : %d", compt2);
	printf("\n\n");
}
	

void affiche(int t[])
{
	int i;
	for(i = 0; i < N; i++)
	{
		printf("\t%d", t[i]);
		printf("\n");
	}
	printf("\n\n");
}	
