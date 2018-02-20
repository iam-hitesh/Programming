#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isCheck(char opening,char closing){
  if(opening == '{' && closing == '}') return true;
  else if(opening == '(' && closing == ')') return true;
  else if(opening == '[' && closing == ']') return true;
  else return false;
}

bool isBalanced(string exp){

  stack<char> S;

  for(int i = 0;i<exp.length();i++){
    if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{'){
      S.push(exp[i]);
    }else if(exp[i] == ')' || exp[i] == ']' || exp[i] == '}'){
      if(S.empty() || !isCheck(S.top(),exp[i])){
        return false;
      }else{
        S.pop();
      }
    }
  }
  return S.empty() ? true:false;
}

int main(){
  string exp;
  cin>>exp;
  if(isBalanced(exp)){
    cout<<"Balanced";
  }else{
    cout<<"Not Balanced";
  }
}
