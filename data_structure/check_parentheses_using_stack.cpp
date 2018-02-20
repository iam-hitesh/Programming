#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool ArePair(char opening,char closing){
  if(opening == '(' && closing == ')') return true;
  else if(opening == '{' && closing == '}') return true;
  else if(opening == '[' && closing == ']') return true;
  else return false;
}

bool balancing(string s){
  stack<char> S;
  for(int i = 0;i<s.length();i++){
    if(s[i] == '(' || s[i] == '{' || s[i] == '['){
      S.push(s[i]);
    }else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
      if(S.empty() || !ArePair(S.top(),s[i])){
        return false;
      }else{
        S.pop();
      }
    }
  }
  return S.empty() ? true:false;
}

int main(){
  string s;
  cout<<"Enter a Expression";
  cin>>s;

  if(balancing(s)){
    cout<<"Balanced";
  }else{
    cout<<"Not Balanced";
  }
}
