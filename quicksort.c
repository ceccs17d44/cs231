#include<stdio.h>
void quicksort(int N[25],int first,int last)
{
	int i,j,pt,temp;
	if(first<last)
	{
		pt=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(N[i]<=N[pt]&&(i<last))
				i++;
			while(N[j]>N[pt])
				j--;
			if(i<j)
			{
				temp=N[i];
				N[i]=N[j];
				N[j]=temp;
			}
		}
		temp=N[pt];
		N[pt]=N[j];
		N[j]=temp;
		quicksort(N,first,j-1);
		quicksort(N,j+1,last);
	}
}
int main()
{
	int i,count,N[25];
	printf("Enter number of elements:");
	scanf("%d",&count);
	printf("Enter %d elements",count);
	for(i=0;i<count;i++)
		scanf("%d",&N[i]);
	quicksort(N,0,count-1);
	printf("Order of sorted elements:");
	for(i=0;i<count;i++)
		printf("%d",N[i]);
	return 0;
}
