#include<stdio.h>
#include<stdbool.h>
#define capacity 5
int stack[capacity];
int top = -1;

bool isEmpty()
{
    if(top==-1)
        return true;
    else
        return false;
}

bool isFull()
{
    if(top == capacity-1)
        return true;
    else
        return false;
}

void push(int data)
{
    if(!isFull())
    {
        top = top + 1;
        stack[top] = data;
    }
    else
        printf("Sorry stack is full \n");

}

int pop()
{
    int data;
    if(!isEmpty())
    {
        data = stack[top];
        top = top - 1;
        return data;
    }
    else
        printf("Sorry stack is empty \n");
}

int peek()
{
    if(top >= 0)
    {
        return stack[top];
    }
    else
        printf("Sorry stack is empty \n");
}

int size(){
    return top+1;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    printf("%d\n",isFull());
    printf("%d\n",peek());
    printf("%d\n",isEmpty());
    printf("%d\n",size());
    push(7);
    printf("%d\n",size());
    return 0;
}
