#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;

};
void traverse(struct node *head)
{
    struct node *p=head;
    while(p!=NULL)
    {
        printf("%d <->",p->data);
        p=p->next;
    }
    printf("NULL\n");
}
int main()
{
    struct node *head=NULL;
    struct node *tail=NULL;
    int i,n;
    printf("Enter the number of nodes you want:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data in %d element",i+1);
        scanf("%d",newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
          head=tail=newnode;
        }
        else
        {
           tail->next=newnode;
           tail->prev=newnode;
           tail=newnode;
        }
    }
    traverse(head);
}