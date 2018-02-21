#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        stack<long int> S,m;
        m.push(-1);
        int test;
    cin>>test;
    for(int i = 0;i<test;i++){
        int q,d;
        cin>>q;
        if(q == 1){
            cin>>d;
            S.push(d);
            if(d >= m.top()){
                m.push(d);
            }
        }else if(q == 2){
            int c = S.top();
            if(c == m.top()){
                m.pop();
            }
            S.pop();
        }else{
            cout<<m.top()<<"\n";
        }
    }
}
