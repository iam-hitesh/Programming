#include<iostream>

using namespace std;

struct Node{
  int data;
  struct Node * left;
  struct Node * right;
}Node;

struct Node * newNode(int data){
  struct Node * temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}

struct Node * insert(struct Node * root,int data){
  if(root == NULL){
    root = newNode(data);
  }else if(data >= root->data){
    root->right = insert(root->right,data);
  }else{
    root->left = insert(root->left,data);
  }
  return root;
}

bool search(struct Node * root,int data){
  if(root == NULL){
    return false;
  }else if(root->data == data){
    return true;
  }else if(data >= root->data){
    return search(root->right,data);
  }else{
    return search(root->left,data);
  }
}

int main(){
  struct Node * root = NULL;
  root = insert(root,3);
  root = insert(root,20);
  root = insert(root,14);
  root = insert(root,120);
  root = insert(root,27);
  root = insert(root,73);
  root = insert(root,84);
  root = insert(root,92);
  root = insert(root,22);
  root = insert(root,10);
  root = insert(root,203);
  root = insert(root,293);
  root = insert(root,291);
  root = insert(root,34783);
  root = insert(root,9430);
  root = insert(root,201);
  root = insert(root,122);
  root = insert(root,120);
  root = insert(root,14);
  root = insert(root,73);
  root = insert(root,3203);
  root = insert(root,3202);

  int find;

  cin>>find;
  if(search(root,find) == true){
    cout<<"Found";
  }else{
    cout<<"Not Found";
  }
}
