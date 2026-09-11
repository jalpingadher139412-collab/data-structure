//DOUBLY LINKEDLIST
#include <stdio.h>
#include <malloc.h>

struct node {
    struct node *next;
    int data;
    struct node *prev;
};

struct node *start = NULL;

void create_ll();
void display();
void insert_beg();
void insert_end();
void insert_before();
void insert_after();
void delete_beg();
void delete_end();
void delete_node();

void main() {
    int option;
    do {
        printf("\n-------Main Menu-------");
        printf("\n 1. Create linked list");
        printf("\n 2. Display linked list");
        printf("\n 3. Insert a node in begining");
        printf("\n 4. Insert a node at end");
        printf("\n 5. Insert a node before a given node");
        printf("\n 6. Insert a node after a given node");
        printf("\n 7. Delete a node from begining");
        printf("\n 8. Delete a node at end");
        printf("\n 9. Delete a given node");
        printf("\n 10. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &option);
        switch(option) {
            case 1: create_ll(); printf("\nLINKED LIST CREATED"); break;
            case 2: display(); break;
            case 3: insert_beg(); break;
            case 4: insert_end(); break;
            case 5: insert_before(); break;
            case 6: insert_after(); break;
            case 7: delete_beg(); break;
            case 8: delete_end(); break;
            case 9: delete_node(); break;
        }
    } while(option != 10);
}

void create_ll()
{
    struct node *new_node,*ptr;
    int num;
    printf("\n Enter -1 to end");
    printf("\nEnter the data:");
    scanf("%d", &num);
    while(num!=-1)
    {
        if(start==NULL)
        {
            new_node=(struct node*)malloc(sizeof(struct node));
            new_node-> prev=NULL;
            new_node-> data=num;
            new_node-> next=NULL;
            start=new_node;
        }
        else
        {
                ptr=start;
                new_node=(struct node*)malloc(sizeof(struct node));
                new_node-> data=num;
                while(ptr->next != NULL)
                    {
                        ptr = ptr->next;
                    }
                     ptr->next = new_node;
                     new_node->prev=ptr;
                     new_node->next = NULL;

        }
        printf("Enter the data:");
        scanf("%d", &num);

    }
}

void display()
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL) {
        printf("\t %d", ptr->data);
        ptr = ptr->next;
    }
}

void insert_beg()
{
    struct node *new_node;
    int num;
    printf("\n Enter the data :");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    start->prev = new_node;
    new_node->next = start;
    new_node->prev = NULL;
    start = new_node;
}

void insert_end()
 {
    struct node *ptr, *new_node;
    int num;
    printf("\n Enter the data :");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
     ptr = start;
        while(ptr->next != NULL)
            {
            ptr = ptr->next;
            }
            ptr->next=new_node;
            new_node->prev=ptr;
            new_node->next=NULL;

 }

 void insert_before()
 {
    struct node *new_node, *ptr;
    int num, val;
    printf("\n Enter the data :");
    scanf("%d", &num);
    printf("\n Enter the value before which the data has to be inserted :");
    scanf("%d", &val);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;

        while ( ptr->data != val)
        {
           ptr = ptr->next;
        }
           new_node->next = ptr;
           new_node->prev= ptr->prev;
           ptr->prev->next=new_node;
           ptr->prev=new_node;

}

void insert_after()
{
   struct node*new_node, *ptr;
   int num,val;
   printf("\n Enter the data :");
   scanf("%d", &num);
   printf("\n Enter the value before which the data has to be inserted :");
   scanf("%d",&val);
   new_node = (struct node *)malloc(sizeof(struct node));
   new_node ->data = num;
   ptr = start;
   while(ptr -> data !=val)
   {
       ptr = ptr -> next;
   }
   new_node -> prev= ptr;
   new_node->next = ptr->next;
   ptr->next->prev=new_node;
   ptr->next=new_node;
}

void delete_beg()
{
  struct node *ptr;
  ptr = start;
  start = start ->next;
  start->prev=NULL;
  free(ptr);
}

void delete_end()
{
  struct node *ptr;
  ptr = start;
  while(ptr -> next !=NULL)
  {
      ptr = ptr ->next;
  }
  ptr-> prev -> next =NULL;
  free(ptr);

}

void delete_node()
{
  struct node *ptr;
  int val;
  if(start==NULL)
  {
      printf("\nList is empty");
      return;
  }
  printf("\n Enter the value of the node which has to be deleted :");
  scanf("%d",&val);
  ptr = start;

       while(ptr !=NULL && ptr-> data !=val)
       {
           ptr = ptr -> next;
       }
       if(ptr==NULL)
       {
        printf("\nValue not found!");
        return;
       }
       if(ptr->prev==NULL)
       {
        start=ptr->next;
        if (start!=NULL)
        {
            start->prev=NULL;
        }
       }
        else
        {
            //Connect previous node to next node
            ptr->prev->next=ptr->next;
            //Connect next node to previous mode
            if(ptr->next!=NULL)
            {
                ptr->next->prev=ptr->prev;
            }
        }

       free(ptr);
       printf("\n Node deleted succesfully");

}
