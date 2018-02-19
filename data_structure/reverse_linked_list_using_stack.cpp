#include<iostream>
#include<stack>

using namespace std;

struct Node {
  int data;
  struct Node * next;
}



void reverse(){
  Node * temp = head;
  while(temp != NULL){
    S.push(temp);
    temp=temp->next;
  }

  Node * temp = S.top();
  head = temp;
  S.pop();
  while(!S.empty()){
    temp->next = S.top();
    S.pop();
    temp = temp->next;
  }
  temp->next = NULL;
}

int main(){
  int n;
  printf("Size of List");
  scanf("%d",n);

  
}
