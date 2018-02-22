#include<iostream>
using namespace std;

#define MAX_SIZE 101

class Queue{
private:
  int q[MAX_SIZE];
	int front, rear; 
  
public:
  Queue(){
    front = -1;
    rear = -1;
  }

  bool isEmpty(){
    return (front == -1 && rear == -1);
  }
  bool isFull(){
    return ((rear+1)%MAX_SIZE == front ? true : false);
  }
  void enqueue(int x){
    if(isFull()){
      cout<<"Queue is Full";
      return;
    }
    if(isEmpty()){
      front=rear=0;
    }else{
      rear = (rear+1)%MAX_SIZE;
    }
    q[rear] = x;
  }
  void dequeue(){
    if(isEmpty()){
      cout<<"Queue is Empty";
      return;
    }else if(front == rear){
      rear = front = -1;
    }else{
      front = (front+1)%MAX_SIZE;
    }
  }
  int Front(){
    if(isEmpty()){
      cout<<"Queue is Empty";
      return -1;
    }else{
      cout<<q[front];
    }
  }
  void print(){
    int count = (rear+MAX_SIZE-front)%MAX_SIZE + 1;
    cout<<"Queue";
    for(int i = 0;i<count;i++){
      int index = (front+i)%MAX_SIZE;
      cout<<q[index];
    }
    cout<<"\n";
  }
};

int main(){
  Queue Q;
  Q.enqueue(2);  Q.print();
   Q.enqueue(4);  Q.print();
   Q.enqueue(6);  Q.print();
   Q.dequeue();	  Q.print();
   Q.enqueue(8);  Q.print();
}
