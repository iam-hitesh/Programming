#include<iostream>

using namespace std;

struct Node{
  int data;
  struct Node * left;
  struct Node * right;
};

struct Node * NewNode(int data){
  struct Node * newNode = new Node();
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

struct Node * Insert(struct Node * root,int data){
  if(root == NULL){
    root = NewNode(data);
    return root;
  }else if(data <= root->data){
    root->left = Insert(root->left,data);
  }else{
    root->right = Insert(root->right,data);
  }
  return root;
}

bool Search(struct Node * root,int search){
  if(root == NULL){
    return false;
  }else if(root->data == search){
    return true;
  }else if(search <= root->data){
    return Search(root->left,search);
  }else{
    return Search(root->right,search);
  }
}

int main(){
  struct Node * root = NULL;
  root = Insert(root,15);
  root = Insert(root,10);
  root = Insert(root,20);
  root = Insert(root,8);
  root = Insert(root,90);
  root = Insert(root,120);
  root = Insert(root,2);

  int search;
  cout<<"Enter Number to Search";
  cin>>search;
  if(Search(root,search) == true){
    cout<<"Found";
  }else{
    cout<<"Not Found";
  }
}
