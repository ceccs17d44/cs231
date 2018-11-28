/* Sachin R
   s3 D
  Heapsort */

#include<stdio.h>
void main()
{
	int heap[10],n,i,j,c,root,temp;
	printf("\n Enter the no.of elements");
	scanf("%d",&n);
	printf("\n Enter the numbers:");
	for(i=0;i<n;i++)
		scanf("%d",&heap[i]);
	for(i=1;i<n;i++)
	{
		c=i;
		do
		{
			root=(c-1)/2;
			if(heap[root]<heap[c])
			{
				temp=heap[root];
				heap[root]=heap[c];
				heap[c]=temp;
			}
			c=root;
		}while(c!=0);
	}
	
	for(j=n-1;j>=0;j--)
	{
		temp=heap[0];
		heap[0]=heap[j];
		heap[j]=temp;
		root=0;
		do
		{
			c=2*root+1;
			if((heap[c]<heap[c+1])&&c<j-1)
				c++;
			if(heap[root]<heap[c]&&c<j)
			{
				temp=heap[root];
				heap[root]=heap[c];
				heap[c]=temp;
			}
			root=c;
		}while(c<j);
	}
		printf("\n The sorted array is:");
		for(i=0;i<n;i++)
			printf("%d \t",heap[i]);
}

/*  output

 Enter the no.of elements
5

 Enter the numbers:
5
7
9
8
2
The sorted array is:2  5       7       8       9

*/
