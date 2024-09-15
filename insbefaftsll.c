#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};
struct node*head=NULL,*tail=NULL;
void create()
{
    int n,i;
    struct node*temp;
    printf("\nEnter number of nodes ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        temp = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter node ");
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;

        }
        else
        { 
            tail->next=temp;

            tail=temp;
        }
    }
}
void display()
{
    struct node*trav=head;
    while(trav!=NULL)
    {
        printf("%d",trav->data);
        trav=trav->next;
    }
}
void insert()
{
    int element,item,n;
    printf("\nEnter new node ");
    scanf("%d",&element);
    printf("\nEnter 1 for before and 2 for after ");
    scanf("%d",&n);
    if(n==2)
    {
    struct node*temp = (struct node*)malloc(sizeof(struct node));
   temp->data=element;
    printf("\nNode after which you want to add new node ");
    scanf("%d",&item);
    struct node*trav=head;
    if(tail->data==item)
    {
        tail->next=temp;
        tail=temp;
        
    }
    else{
    while(trav->data!=item)
    {
        trav=trav->next;
    }
    
    temp->next=trav->next;

    trav->next=temp;
    }
    }
    else if(n==1)
    {
        struct node*temp = (struct node*)malloc(sizeof(struct node));
        temp->data=element;
        printf("\nNode before which you want to add new node ");
        scanf("%d",&item);
        struct node*trav=head;
        if(head->data==item)
        {
            temp->next=head;
            head=temp;
            

        }
        else
        {
            while(trav->next->data!=item)
            {
                trav=trav->next;

            }
            temp->next=trav->next;


            trav->next=temp;
            
        }
    }

}
int main() 
{
    int ch;

    while (1) {
        printf("\nEnter 1 to create LL, 2 to display LL, 3 to insert in LL, 4 to delete: ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            create();
        } 
        else if (ch == 2)
        {
            display();
        }
        else if(ch==3)
            insert();


    }
}