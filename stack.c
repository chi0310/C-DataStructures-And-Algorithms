#include <stdio.h>
#define MAX_SIZE 5

typedef struct stk{
    int data[MAX_SIZE];
    int top = -1;
}stack;

int is_empty(stack* s){
    if (s->top == -1){
        return 1;
    }
    else return 0;
}

int is_full(stack* s){
    if (s->top + 1 == MAX_SIZE){
        return 1;
    }
    else return 0;
}

void push(stack* s, int value){
    if(is_full(s)){
        printf("stack is full\n");
    }
    else{
        s->data[++s->top] = value;
    }
}

void pop(stack* s){
    if (is_empty(s)){
        printf("stack is empty\n");
    }
    else{
        printf("value %d\n", s->data[s->top--]);
    } 
}

int main(){
    stack s;
    pop(&s);
    for(int i=0; i<5; i++){
        push(&s, i);
    }
    for(int i=0; i<5; i++){
        pop(&s);
    }
    pop(&s);
    pop(&s);
}