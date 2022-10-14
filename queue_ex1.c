#include <stdio.h>
#include <stdlib.h>

#define N 5
int queue[N];
int front=-1, rear=-1;

void enqueue(int x){
    int x;
    if(rear == N-1){
        printf("Queue is full");
    }
    else if(front == -1 && rear == -1){
        front=rear=0;
        queue[rear] = x;
    }
    else{
        rear++;
        queue[rear];
    }
}

void dequeue(){
    if (front == -1 && rear == -1){
        printf("Queue is already empty");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        front++;
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("EMpty");
    }else{
        for(int i=front; i<rear+1; i++){
            printf("%d",queue[i]);
        }
    }
}