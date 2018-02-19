#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
  int data;
  struct Node * next;
}node;
struct Node * top = NULL;

int pop();
int push(int val);
int isEmpty();

int pop(){
  struct Node * temp;
  if(top == NULL){
    return 0;
  }
  temp = top;
  top = top->next;
  free(temp);
}

int push(int val){
  struct Node * temp = (struct Node * )malloc(sizeof(struct Node*));

  temp->data = val;
  temp->next = top;
  top = temp;
}

int isEmpty(){
    struct Node * temp = top;
    if(temp==NULL){
        return 0;
    }else{
        return 1;
    }
}

int main(){
  push(3);
  push(4);

  printf("Top Element is %d \n",top->data);
  pop();
  printf("Top Element after Pop is %d \n",top->data);
  int val = isEmpty();
  printf("List is Not Empty %d \n",val);
  pop();
  int val2 = isEmpty();
  printf("List is Not Empty %d",val2);
}
