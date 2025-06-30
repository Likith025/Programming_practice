#include <stdio.h>
#include<stdlib.h>

typedef struct stack_pointer
{
    int *stack;
    int top;
    int size;
}stack_data;


void stack_init(stack_data* stack,int size);
void stack_push(stack_data* stack,int value);
void stack_display(stack_data* stack);
void stack_pop(stack_data* stack);
void stack_rev(stack_data* stack);





int main(){
    stack_data s1;
    stack_init(&s1,10);
    stack_push(&s1,11);
    stack_push(&s1,12);
    stack_push(&s1,13);
    stack_display(&s1);
    // stack_pop(&s1);
   //stack_display(&s1);
    stack_rev(&s1);
    stack_display(&s1);
    return 0;
}

void stack_init(stack_data* stack,int size){
    stack->stack= (int *)malloc(size*sizeof(int));
    stack->size=size;
    stack->top=0;
    printf("Created a stack of size %d \n",stack->size);

}

void stack_push(stack_data* stack,int value){
    if(stack->top>=stack->size){
        printf("stack size crossed\n");
        return ;
    }
    stack->stack[stack->top]=value;
    stack->top++;
    printf("%d pushed to stack\n",value);
}

void stack_display(stack_data* stack){
    printf("printtng contents of stack \n");
    for(int i=0;i<stack->top;i++){
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

void stack_rev(stack_data* stack){
    int temp;
    for(int i=0;i<(stack->top)/2;i++){

        temp=stack->stack[i];
        stack->stack[i]=stack->stack[(stack->top)-1-i];
        stack->stack[(stack->top)-1-i]=temp;
    }


 }

