#include<stdio.h>
#include<stdlib.h>

int stack_size;
int top=-1;


int* stack_init();
void stack_push(int*,int);
int stack_pop(int*);
void stack_display(  int*);

int main(){
    int* stack=stack_init();
    // stack_push(stack,1);
    // stack_push(stack,2);
    // stack_push(stack,3);
    // stack_push(stack,4);
    // stack_push(stack,5);
    stack_display(stack);
    free(stack);


    return 0;
}

int* stack_init(){
    printf("enter the size of the stack\n");
    scanf("%d",&stack_size);
    int *stack=(int*)malloc(stack_size*sizeof(int));
    
}

void stack_push(int* stack,int value){
    if(top>=stack_size-1){
        printf("stack overflow \n");
        exit;
    }
    else{
        top++;
        stack[top]=value;
    }
}
int stack_pop(int* stack){
    if(top==-1){
        printf("no values in stack\n");
        return 0;
    }
    else{
    
    return stack[top--];
    }
}

void stack_display(int* stack){
    if(top==-1){
        printf("no elements in stack to display\n");
        return;
    }
    else{
        printf("printing contents of stack\n");
        for(int i=0;i<=top;i++){
            printf("%d\t",stack[i]);

    }
    }
}



