#include<iostream>

using namespace std;

struct list{
  int data;
  struct list * next;
};

struct list * front;
struct list * rear;

void enqueue(int x){
  struct list * temp = (struct list *)malloc(sizeof(struct list));
  temp->data = x;
  temp->next = NULL;
  if(front == NULL && rear == NULL){
    front= rear = temp;
    return;
  }
  rear->next = temp;
  rear = temp;
}

void dequeue(){
  struct list * temp = front;
  if(front == NULL){
    cout<<"List is Empty";
    return;
  }else if(front == rear){
    front = rear = NULL;
  }else {
    front = front->next;
  }
  free(temp);
}

int Front(){
  if(front == NULL){
    cout<<"List is Empty";
    return 0;
  }
  return front->data;
}

int Print(){
  struct list * temp = front;
  while(temp != NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
  }
  cout<<"NULL \n";
}

int main(){
            enqueue(2); 
            cout <<"After Enqueue ";
            Print();
	enqueue(4); 
	cout <<"After Enqueue ";
	Print();
	enqueue(6); 
	cout <<"After Enqueue ";
	Print();
	dequeue();  
	cout <<"After Dequeue ";
	Print();
	enqueue(8); 
	cout <<"After Enqueue ";
	Print();
}
