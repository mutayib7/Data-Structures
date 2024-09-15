# include <stdio.h>
# include <stdlib.h>

struct node 
{
    char name[50];
    int age;
    
    int marks;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;

void create_ll(struct node *temp)
{

    int n;
    printf("Enter number of students whose info is to be stored\n");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        temp = (struct node*)malloc(sizeof(struct node));
        temp->next=NULL;
        printf("Enter student name\n");
        scanf("%s",temp->name);
        printf("Enter age\n");
        scanf("%d",&temp->age);
        printf("Enter marks\n");
        scanf("%d",&temp->marks);

        if(head == NULL)
        {
            head  = temp;
            tail  = temp;
            tail->next=head;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            tail->next=head;
        }
        
    }
}

void view_ll(struct node *a)
{
    struct node *p = head;
    while(1)
    {
        if(p->marks<100){
        printf("student details are:\n");
        printf("Name: %s\n",p->name);
        printf("Age: %d\n", p->age);
        printf("Marks: %d\n",p->marks);
        }
        if(p->next==head)
        break;
        p=p->next;
    }
}
int main()
{
    struct node *temp;
    create_ll(temp);
    view_ll(temp);
}