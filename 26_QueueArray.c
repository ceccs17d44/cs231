/* Sachin R
   s3 D
   queue using array */
#include <stdio.h>
#include<stdlib.h>
 
#define MAX 50
int queue_array[MAX];
int rear = - 1;
int front = - 1;
 
int insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} 
 
int delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return 0;
    }
    else
    {
        printf("Element dequeued from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} 
int display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.dequeue element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        } 
    } 
return 0;
}
/* output
1.Insert element to queue
2.dequeue element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 1
Inset the element in queue : 5
1.Insert element to queue
2.dequeue element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 1
Inset the element in queue : 6
1.Insert element to queue
2.dequeue element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 3
Queue is :
5 6
1.Insert element to queue
2.dequeue element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 2
Element dequeued from queue is : 5
1.Insert element to queue
2.dequeue element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 2
Element dequeued from queue is : 6
1.Insert element to queue
2.dequeue element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 2
Queue Underflow
1.Insert element to queue
2.dequeue element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 4
*/
