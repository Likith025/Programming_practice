#include<stdio.h>
#define Stack_size  10

int top=0;
int stack[Stack_size]={};

void push();
void display();
void pop();

int main(){
    push();
    push();
    display();
    pop();
    display();
}



void push(){
    int value;
    if(top>=Stack_size){
        printf("stack size crossed\n");
        return;    }
    printf("enter the value to push into stack \n");
    scanf("%d",&value);
    stack[top]=value;
    top++;

}

void display(){
    printf("printting stack contents \n");
    for(int i=0;i<top;i++){
        printf("%d \n",stack[i]);
    }
}

void pop(){
    stack[top]=0;
    top--;
}