#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traverse(struct node *head)
{
    struct node*p=head;
    while(p!=NULL)
    {
        printf("%d->",p->data);
        p=p->next;
    }
    printf("NULL\n");
}
struct node *delete(struct node *head,int key)
{
    struct node *p=head;
    struct node *prev=NULL;
    if(p!=NULL && p->data==key)
    {
        head=p->next;
        free(p);
        return head;
    }
    while(p!=NULL && p->data!=key)
    {
        prev=p;
        p=p->next;
    }
    if(p==NULL)
    {
        printf("Key not found:\n");
        return head;
    }
    prev->next=p->next;
    free(p);
    return head;
}
int main()
{
    struct node *head=NULL;
    int n,element,i;
    printf("Enter the number of nodes in list:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)   
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data in %d:",i+1);
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
    }
    traverse(head);
    printf("Enter the element to be deleted:\n");
    scanf("%d",&element);
    head=delete(head,element);
    printf("After:\n");
    traverse(head);
    return 0;
}