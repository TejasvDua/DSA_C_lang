// Infix to Postfix

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5
int stack[N];
int top = -1;

char push(char x){
    if(top == N-1){
        printf("Stack overflow");
    }
    else{
        stack[top] = x;
        top++;
    }
}

void pop(){
    if(top == -1){
        printf("Stack underflow");
    }
    else{
        printf("Deleted element: %d",stack[top]);
        top--;
    }
}

void peek(){
    if(top == -1){
        printf("Empty Stack");
    }
    else{
        printf(stack[top]);
    }
}

void display(){
    if(top == -1){
        printf("Empty stack");
    }
    else{
        for(int i=top; i>=0; i--){
            printf("\n%d",stack[i]);
        }
    }
}

void main(){

}