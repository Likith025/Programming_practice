#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
    char *s;
    int top;
    int size;
}stack;

void stack_init(stack*,int);
void push_stack(stack*,char);

int main(){
    stack s1;
    printf("started\n");
    stack_init(&s1,5);

    return 0;
}

void stack_init(stack* stack,int size){
    stack->stack= (int *)malloc(size*sizeof(int));
    stack->size=size;
    stack->top=-1;
    printf("Created a stack of size %d \n",stack->size);

}

void stack_push(stack_data* stack,int value){
    if(stack->top>=stack->size-1){
        printf("stack size crossed\n");
        return ;
    }
        stack->top++;
    stack->stack[stack->top]=value;
    printf("%d pushed to stack\n",value);
}

void stack_display(stack_data* stack){
    printf("printtng contents of stack \n");
    for(int i=0;i<=stack->top;i++){
        printf("%d \n",stack->stack[i]);
    }
}

void stack_pop(stack_data* stack){
    if (stack->top <= 0) {
        printf("Stack Underflow\n");
        return ; 
    }
    stack->top--;
    printf("%d is poped from stack\n",stack->stack[stack->top]);    
}