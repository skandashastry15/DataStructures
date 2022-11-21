#include <stdio.h>
#include <stdlib.h>
#define size 3
struct stack{
    int s[size];
    int top;
};
void push(struct stack *);
int pop(struct stack *);
void display(struct stack *);

void main()
{
    struct stack st;
    int choice,del;
    st.top=-1;
    while(1){
        printf("\n1. Push\n2. Pop\n3. Display\n4.Exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:push(&st);
            break;
            case 2:del = pop(&st);
            printf("popped element is %d",del);
            break;
            case 3:display(&st);
            break;
            case 4:exit(0);
            default: printf("invalid choice");
        }
    }
}
void push(struct stack *p){
    int val;
    if(p->top == size-1){
        printf("stack overflow\n");
        return;
    }else{
        p->top++;
        printf("enter element");
        scanf("%d",&val);
        p->s[p->top] = val;
    }
}
int pop(struct stack *p){
    int d;
    if(p->top == -1){
        printf("stack underflow\n");
        return 0;
    }else{
        d = p->s[p->top];
        p->top--;
        return(d);
    }
}
void display(struct stack *p){
    int i;
    if(p->top==-1){
        printf("stack overflow");
    }else{
        printf("stack content:");
        for(i=p->top;i>=0;i--){
            printf("%d\t",p->s[i]);
        }
    }
}
