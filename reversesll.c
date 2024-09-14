#include<stdio.h>
#include<stdlib.h>
struct node{
    
    int data;
    struct node *next;

};
struct node *head=NULL,*tail=NULL;
void create_ll()
{
    int n;
    printf("Enter number of nodes");
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        struct node *temp;
        temp = (struct node*)malloc(sizeof(struct node));
        temp->next=NULL;
        printf("enter the data");
        scanf("%d",&temp->data);
        

        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;

          
            tail=temp;
        }

    }

}
void view(){
    struct node *trav;

    trav=head;
    while(trav!=NULL){

printf("%d",trav->data);
trav=trav->next;
}

}

void reverse(){
    struct node *q,*p,*t=NULL;

        p=head;
        while(p!=NULL){
            q=t;
            t=p;
            p=p->next;
            t->next=q;
        }
       p=head;
       head=tail;
       tail=p;

    }
    int main(){
    int n;

    while(1){
         printf("enter choice");
    scanf("%d",&n);
    if(n==1)
    create_ll();
    if(n==2)
    view();

    if(n==3)
    reverse();



   }

}