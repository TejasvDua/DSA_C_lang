#include<stdio.h>
#include<stdlib.h>

#define N 5
int stack[N];
int top = -1;

void push(){
    int x;
    printf("Enter the data: ");
    scanf("%d",&x);

    if(top == N-1){
        printf("Stack Overflow");
    }
    else{
        top++;
        stack[top] = x;
    }
}

void pop(){
    if(top == -1){
        printf("Stack Underflow");
    }
    else{
        printf("Deleted value %d",stack[top]);
        top--;
    }
}

void peek(){
    if(top == -1){
        printf("Stack is empty");
    }
    else{
        printf("%d",stack[top]);
    }
}

void display(){
    if(top == -1){
        printf("Stack is empty");
    }
    else{
        for(int i=top; i>=0; i--){
            printf("\n%d", stack[i]);
        }
    }
}


void main(){
    int choice;
    do{  
        printf("\nEnter Your Choice: ");
        printf("\n0. Exit");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n >>");
        scanf("%d",&choice);

        switch(choice){
            case 0:
            exit(0);
            break;
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            default:
            printf("Enter from the given values only!");
        }
    }while(choice != 0);
}