Stack using array:

#include <stdio.h>
#include <stdlib.h>
struct stack 
{
    int size;
    int top;
    int *s;
};

void create(struct stack *st)
{   
    int size;
    printf("Enter the size of the stack:");
    scanf("%d",&size);
    st->size=size;
    st->top=-1;
    st->s=(int *)malloc(sizeof(struct stack)*size); 
}
void push(struct stack *st,int value)
{
    if(st->top==st->size-1)
    {
        printf("stack overflow ");
    }
    else
    {
        st->top++;
        st->s[st->top]=value;
    }
}
void display(struct stack st)
{
    for(int i=(st.top);i>=0;i--)
    {
        printf("%d ",st.s[i]);
    }
}
int pop(struct stack *st)
{
    if(st->top==-1)
    {
        printf("stack underflow");
        return -1;
    }
    else
    {
        int x;
        x=st->s[st->top--];
        return x;
    }
}
int peek(struct stack st,int pos)
{
    if(st.s[st.top-pos+1]<0)
    {
        return -1;
    }
    int x;
    x=st.s[st.top-pos+1];
    return x;
}
int isempty(struct stack st)
{
 if(st.s[st.top]==-1)
 {
    return -1;
 }
 return 1;
}
int isfull(struct stack st)
{
    if(st.s[st.top]==st.size-1)
    {
        return -1;
    }
    return 1;
}
int main()
{
    struct stack s;
    create(&s);
    push(&s,10);
    push(&s,20);
    push(&s,30);
    display(s);
    printf("\nThe element deleted is: %d\n",pop(&s));
    display(s);
    printf("\n");
    printf("%d",peek(s,1));
    printf("\n");
    printf("%d",isempty(s));
    printf("\n");
    printf("%d",isfull(s));
    return 0;
} 
