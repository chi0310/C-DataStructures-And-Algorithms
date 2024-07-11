#include <stdio.h>

#define MAX_SZIE 5

typedef struct circular_queue{
    int data[MAX_SZIE];
    int rear = -1;
    int front =-1;
}cq;

void enqueue(cq *q, int data){
    if(q->front == (q->rear + 1) % MAX_SZIE){
        printf("queue is full\n");
    }
    else{
        q->rear  = (q->rear + 1) % MAX_SZIE;
        q->data[q->rear] = data;
    }
}

void dequeue(cq *q){
    if(q->front == q->rear){
        printf("queue is empty\n");
    }
    else{
        q->front = (q->front + 1) % MAX_SZIE;
        printf("value is %d\n", q->data[q->front]);
    }
}

int main(){
    cq q;
    dequeue(&q);
    for(int i=0; i<5; i++){
        enqueue(&q, i);
    }

    for(int i=0; i<5; i++){
        dequeue(&q);
    }

    dequeue(&q);
}