#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node* next;
  struct node* prev;
}*HEADER;


struct node* newNode()
{
  struct node* newptr = malloc(sizeof(struct node));
  if (newptr == NULL) {
    printf("Memory overflow\n");

    exit(0);
  }
  return (newptr);
}
int insertNodeFront (int data)
{
    struct node *ptr=HEADER,*c;

    if(HEADER->data==0)
    {
        HEADER->data=data;
        return 0;
    }
    while(ptr!=NULL)
    {

        if(data>ptr->data)
        {

            c=ptr;

            ptr=ptr->next;

        }
        else if(data<ptr->data)
        {
            c=ptr;

            ptr=ptr->prev;
        }
        else
        {
            printf("no already exsist");
            return 0;
        }
    }
    if(c->data>data)
    {
        struct node *new = newNode();
        new->data = data;
        new->prev = NULL;
        new->next = NULL;
        c->prev=new;
    }
    else{
        struct node *new = newNode();
  new->data = data;
  new->prev = NULL;
  new->next = NULL;
  c->next=new;
    }
        return 0;
    }

int deleteNode (int data)
{
    int t;
  struct node *ptr= HEADER,*c,*p,*ppt;
  if (HEADER->data == 0)
  {
    printf("Empty linked list\n");
    return 0;
  }
  else {
    while(ptr!=NULL)
    {
        if(data>ptr->data)
        {
            c=ptr;
            ptr=ptr->next;
        }
        else if(data<ptr->data)
        {
            c=ptr;
            ptr=ptr->prev;
        }
        else
        {
          break;
        }
    }
    if(ptr->next==NULL&&ptr->prev==NULL)
    {
        t=1;
    }
    else if(ptr->next!=NULL&&ptr->prev!=NULL)
    {
        t=2;
    }
    else
    {
        t=3;
    }
    if(t==1)
        {
           if(ptr==c->next)
           {
               c->next=NULL;
           }
           else{
            c->prev=NULL;
           }
        }
        else if(t=3)
        {
            if(ptr->prev==NULL)
            {
                if(ptr->data>c->data)
                {
                    c->next=ptr->next;
                }
                else{
                    c->prev=ptr->next;
                }
            }
            else
            {
                if(ptr->data>c->data)
                {
                    c->next=ptr->prev;
                }
                else{
                    c->prev=ptr->prev;
                }
            }

        }
        else
        {
            ppt=ptr;
            ppt=ppt->next;
    while(ppt!=NULL)
    {
        p=ppt;
        ppt=ppt->prev;
    }
            ptr->data=p->data;
            deleteNode(p->data);


        }
      }
  return (0);
}

int printAll(struct node *c)
{
  if(c!=NULL)
  {
     printAll(c->prev);
     printf("%d",c->data);
     printAll(c->next);
  }

  return (0);
}
int showMenu(
) {
  int choice;
  int data;
  while (1)
  {
    printf("\n\nbinary tree Linked List\n");
    printf("1. Insert \n");
    printf("2. Print Linked List\n");
    printf("3. Delete node\n");
    printf("0. Exit\n");
    printf("Enter your choice : ");
    scanf(" %d", &choice);
    printf("\n");
    switch (choice)
    {
      case 1:
        printf("Enter new data : ");
        scanf("%d", &data);
        insertNodeFront(data);
        break;
      case 3:
        printf("Enter data of the node to be deleted : ");
        scanf("%d", &data);
        deleteNode(data);
        break;
      case 2:
        printAll(HEADER);
        break;
      case 0:
        exit(0);
        break;
      default:
         break;
    }
  }
  return (0);
}
int main()
{
  HEADER = malloc(sizeof(struct node));
  HEADER->data = 0;
  HEADER->next = NULL;
  HEADER->prev = NULL;
  showMenu();
  return (0);
}
