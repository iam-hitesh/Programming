#include<stdio.h>
#include<stdlib.h>


typedef struct list{
  int data;
  struct list * next;
}list;

int createList(int n);
void display(list *head);

int main(){
  int n;
  list *HEAD = NULL;
  
  scanf("%d",&n);


  HEAD = createList(n);
  display(HEAD);
}

int createList(int n){
  list * head = NULL;
  list * temp = NULL;
  list * p = NULL;

  for(int i  = 0;i<n;i++){
    temp = (list*)malloc(sizeof(struct list));
    scanf("%d\n",&(temp->data));
    temp->next = NULL;

    if(head == NULL){
      head = temp;
    }else{
      p = head;
      while(p->next != NULL){
        p = p->next;
      }
      p->next = temp;
    }
  }
  return head;
}

void display(list * head){
  list *p = head;
  while(p != NULL){
    printf("%d\n",p->data);
    p = p->next;
  }
}
