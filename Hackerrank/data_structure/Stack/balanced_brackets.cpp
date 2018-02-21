#include<iostream>
#include<string>
#include<stack>

using namespace std;

// o = opening bracket
// c = closing bracket

bool isCheck(char o,char c){
  if(o == '{' && c == '}') return true;
  else if(o == '(' && c == ')') return true;
  else if(o == '[' && c == ']') return true;
  else return false;
}

bool isBalanced(string exp){
  stack<char> st;
  for(int i = 0;i<exp.length();i++){
    if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{'){
      st.push(exp[i]);
    }else if(exp[i] == '}' || exp[i] == ']' || exp[i] == ')'){
      if(st.empty() || !isCheck(st.top(),exp[i])){
        return false;
      }else{
          st.pop();
      }
    }
  }
  return st.empty()? true:false;
}

int main(){
  int test;
  cin>>test;
  for(int i = 0;i<test;i++){
    string exp;
    cin>>exp;
    if(isBalanced(exp)){
      cout<<"YES \n";
    }else{
      cout<<"NO \n";
    }
  }
}
