/* Sachin R
   s3 D
   Bubble sort*/

#include <stdio.h>

int bubbleSort(int array[], int size) 
{
	int i, j, temp;
	for (i=size; i>=0; i--)
  {
		for (j=0; j<i; j++)
    {
			if (array[j] > array[j+1])
      {
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}
int main() {
	int i, j, array[100], size, temp;

	printf("Enter number of elements in the array : ");
	scanf("%d", &size);

	printf("Enter the array\n");
	for (i=0; i<size; i++)
  {
		scanf("%d", &array[i]);
	}

	bubbleSort(array, size);

	printf("Sorted array \n");
	for (i=0; i<size; i++)
  {
		printf("%d\n", array[i]);
	}
}

/*  output

Enter number of elements in the array : 9
Enter the array
55
88
22
44
66
18
75
61
34
Sorted array
18
22
34
44
55
61
66
75
88

*/
