#include<stdio.h>
#include<stdlib.h>
#define MAX_LIMIT  5
typedef struct{
    int buffer [MAX_LIMIT];
    int head_index;
    int tail_index;
    int count ;
    int max_limit;
} circular_buffer;

void init_circular_buffer(circular_buffer *c);
void print_buffer_status(circular_buffer * c);
void buffer_insert(circular_buffer * c,int );
void buffer_display(circular_buffer*);
int buffer_remove(circular_buffer *c);



int main(){
    static circular_buffer c1;

    init_circular_buffer(&c1);
    buffer_insert(&c1,10);
    buffer_insert(&c1,20);
    buffer_insert(&c1,30);
    buffer_insert(&c1,40);
    buffer_insert(&c1,50);
    buffer_insert(&c1,60);
    //print_buffer_status(&c1);
    buffer_display(&c1);
    int number=buffer_remove(&c1);
    buffer_display(&c1);
    return 0;
}

void init_circular_buffer(circular_buffer *c){
    c->head_index=0;
    c->tail_index=0;
    c->count=0;
    c->max_limit=MAX_LIMIT;
    }

void print_buffer_status(circular_buffer *c){
    printf("Head is at %d\n",c->head_index);
    printf("Tail is at %d\n",c->tail_index);
    printf("There are %d elements in buffer\n",c->count);
    return ;
}

void buffer_insert(circular_buffer *c,int number){

    c->buffer[c->head_index]=number;
    if(c->count<c->max_limit){
        c->count++;
    }
    else{
        c->tail_index=(c->tail_index+1)%c->max_limit;

    }
    c->head_index=(c->head_index+1)%c->max_limit;
    return;

 }

void buffer_display(circular_buffer *c){
    int current_idx=c->tail_index;
    if(c->count==0){
        printf("empty buffer \n");
        return ;
    }
    for(int i=0;i<(c->count);i++){
        printf("%d\n",c->buffer[current_idx]);
        current_idx=(current_idx +1) % c->max_limit;
    }
    return;
}

int buffer_remove(circular_buffer *c){
    int data = c->buffer[c->tail_index];
    printf("%d is removed \n",data);
    c->tail_index = (c->tail_index + 1) % c->max_limit;
    c->count--;
    return data;
}