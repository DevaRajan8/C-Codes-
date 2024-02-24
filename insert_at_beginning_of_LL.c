#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     struct node *next;
};
struct node *head;
void begin(int b)
{
     struct node*new=(struct node*)malloc(sizeof(struct node));
     new->data=b;
     new->next=head;
     head=new;
}
void end(int c)
{
     struct node*new1=(struct node*)malloc(sizeof(struct node));
     new1->data=c;
     new1->next=NULL;
     if(head==NULL)
     {
          head=new1;
     }
     else
     {
        struct node *lastNode = head;
        while(lastNode->next != NULL)
        {
          lastNode = lastNode->next;
        }
        lastNode->next = new1;
     }
}
void insert (int a)
{
     struct node *temp=(struct node*)malloc(sizeof(struct node));
     temp->data=a;
     temp->next=NULL;
     if(head==NULL)
     {
          head=temp;
     }
     else
     {
        struct node *lastNode = head;
        while(lastNode->next != NULL)
        {
          lastNode = lastNode->next;
        }
        lastNode->next = temp;
     }
}
int main()
{
     int n,s,i,d,q;
     printf("Enter the no of nodes :");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          printf("Enter the %d node value :",i);
          scanf("%d",&s);
          insert(s);
     }
     struct node*temp=head;
     while(temp!=NULL)
     {
          printf("%d",temp->data);
          temp=temp->next;
     }
     printf("\nEnter the node to insert beginning :");
     scanf("%d",&d);
     begin(d);
     temp=head;
     while(temp!=NULL)
     {
          printf("%d",temp->data);
          temp=temp->next;
     }
     printf("\nEnter the node to insert at end :");
     scanf("%d",&q);
     end(q);
     temp=head;
      while(temp!=NULL)
     {
          printf("%d",temp->data);
          temp=temp->next;
     }
}
