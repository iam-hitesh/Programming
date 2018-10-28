#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int top=-1,i,len,j=0;
char P[50],Q[50],S[50];
void push(char x)
{top=top+1;
S[top]=x;
}
int prec(char z)
{if(z=='^')
  return 6;
  if(z=='*')
  return 5;
  if(z=='/')
  return 4;
  if(z=='+')
  return 3;
  if(z=='-')
  return 2;
  if(z=='(')
  return 1;
  else return 0;}
  int main()
  {  
     cout<<"\nEnter the infix expression:";
     gets(Q);
     len=strlen(Q);
     Q[len]=')';
     push('(');
     for(i=0;i<len+1;i++)
     {  if(Q[i]<=90&&Q[i]>=65||Q[i]<=122&&Q[i]>=97)
         {P[j]=Q[i];
           j++;
           }
           if(Q[i]=='(')
           {push('(');
           }
           if((Q[i]==42)||(Q[i]==43)||(Q[i]==45)||(Q[i]==47)||(Q[i]==94))
           {while(prec(S[top])>prec(Q[i]))
           {P[j]=S[top];
           j=j+1;
           top-=1;}
           push(Q[i]);}
           if(Q[i]==')')
           {while(S[top]!='(')
           {P[j]=S[top];
           j=j+1;
           top-=1;}
           Q[i]=Q[i-1];
           top=top-1;}
     }
     cout<<"\nThe equivalent postfix expression is:";
     puts(P);
  }
