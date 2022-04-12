#include<stdio.h>
#include<stdlib.h>
struct stack
{
int ara[10];
int top;
};
void push(struct stack *s,int element)
{
    s->top++;
    s->ara[s->top]=element;
}
int pop(struct stack *s)
{
    int temp;
    if(s->top==-1)
    {
        printf("Stack Empty\n");
    }
    else
    {
    temp=s->ara[s->top];
    s->top--;
    return temp;
    }
}
int main()
{
    struct stack s1,s2;
    int ch,ele;
    s1.top=-1;
    s2.top=-1;
    for(;;)
    {
    printf("Enter 1 for push,2 for pop\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("Enter element to be pushed\n");
               scanf("%d",&ele);
               if(s1.top==-1)
               push(&s1,ele);
               else
               {
                       while(s1.top!=-1)
                       {
                           if(s1.top<ele)
                            push(&s1,ele);
                           else
                            push(&s2,s1.top);

                            if(s2.top==-1)
                                break;
                            else
                                continue;
                       }
               }
               break;

        case 2:printf("%d\n ",pop(&s1));
               break;

        default:return(0);
    }
    }

}

