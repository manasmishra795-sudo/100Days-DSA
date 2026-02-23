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
struct node*sorted_merge(struct node *head1,struct node *head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    else if(head2==NULL)
    {
        return head1;
    }
   
    struct node *merge=NULL;
    struct node*q=NULL;
    if(head1->data<=head2->data)
    {
        merge=q=head1;
        head1=head1->next;
    }
    else
    {
        merge=q=head2;
        head2=head2->next;
    }
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data <=head2->data)
        {
            q->next=head1;
            head1=head1->next;
        }
        else
        {
            q->next=head2;
            head2=head2->next;   
        }
        q=q->next;
    }
    if(head1!=NULL)
    {
        q->next=head1;
    }
    else
    {
        q->next=head2;
    }

    return merge;
}



