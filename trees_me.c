#include<stdio.h>
#include<stdlib.h>

//void insert(int);
//void display(struct node);

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}NODE;
NODE*root=NULL;

void insert(int d)
{

    struct node *t,*p,*curr;
    t=(NODE*)malloc(sizeof(NODE));
    t->data=d;
    t->left=NULL;
    t->right=NULL;
    p=root;
    if(root==NULL)
        root=t;
    else
    {
        struct node*curr;
        curr=root;
        while(curr)
        {
            p=curr;
            if(t->data>curr->data)
                curr=curr->right;
            else
                curr=curr->left;
        }
        if(t->data>p->data)
            p->right=t;
        else
            p->left=t;
    }
}
void display(struct node *t)
{
    if(t->left)
        display(t->left);
    printf(" %d ",t->data);
    if(t->right)
        display(t->right);
}

void main()
{
     int ch,n;
     while(1)
     {
         printf("Enter 1 to insert and 2 to display 3 to exit\n");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:
        printf("Enter number\n");
        scanf("%d",&n);
        insert(n);
     case 2:
        display(root);
     case 3:exit(0);
     default:
        printf("Wrong choice\n");
     }
     }

}
