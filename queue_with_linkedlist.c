#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* next;
};

struct node* front;
struct node* rear;

int insert(){
  struct node* newnode = (struct node*) malloc(sizeof(struct node));
  if(newnode == NULL) printf("Overflow");
  else { 
    printf("Enter Data: ");
    scanf("%d",&(ptr->data);
    if(front == NULL){
      front = rear = newnode;
      front ->next = NULL;
      rear-> next = NULL;
    }
    else {
     rear-> next = newnode;
      rear = newnode;
      rear->next = NULL;
    }
  }
}

int delete(){
  struct node* curr = (struct node*) malloc (sizeof(struct node));
  if(front == NULL) printf("Underflow");
  else{
    curr = front;
    front=front->next;
    free(curr);
   }
   }
int display(){
  struct node* curr;
  curr = front;
  if(front == NULL) return printf("Empty Queue");
  else { 
  printf("Queue data: \n");
  while(curr!=NULL){
    printf("%d ,",curr->data);
    curr=curr->next;
  }
}

int main(){
  int n=10;
  do {
      insert();
      display();
      n--;
      }while(n);
    int m= 10;
    while(m){
    
    delete();
    display();
    }
    return 0;
    }
  
    
    
