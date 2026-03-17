#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traverse(struct node *head)
{
    struct node *p=head;
    while(p!=NULL)
    {
        printf("%d->",p->data);
        p=p->next;
    }
    printf("NULL\n");
}
int intersection(struct node *head1,struct node *head2)
{
    struct node *p=head1;
    struct node *q=head2;
    while(p!=NULL || q!=NULL)
    {
    if(p->data==q->data)
    {
        return p->data;
    }
    p=p->next;
    q=q->next;
    }
    return -1;

}
int main()
{
    struct node *head1=NULL;
    struct node *head2=NULL;
    int i,n1,n2;
    printf("Enter the nodes for list1 and list2:\n");
    scanf("%d %d",&n1,&n2);
    for(i=0;i<n1;i++)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the elements in list 1:\n");
        scanf("%d",&newnode->data);
        newnode->next=head1;
        head1=newnode;
    }
    for(i=0;i<n2;i++)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the elements in list 2:\n");
        scanf("%d",&newnode->data);
        newnode->next=head2;
        head2=newnode;
    }
    int check;
    check=intersection(head1,head2);
    if(check==-1)
    {
        printf("No intersection found\n");

    }
    else
    {
        printf("Intersetion:%d",check);
    }
    return 0;

}

