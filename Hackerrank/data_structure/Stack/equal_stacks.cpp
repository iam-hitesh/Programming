#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


unsigned long long int max(unsigned long long int a,unsigned long long int b,unsigned long long  int c){
    if(a>=b && a>=c)
        return a;
    else if(b>=c && b>=a)
        return b;
    else if(c>=b && c>=a)
        return c;  
    else 
        return 0;
}

int main() {       
    long int m,n,o;
    long int i;
    cin>>m>>n>>o;
    
    vector<int> a(m);
    vector<int> b(n);
    vector<int> c(o);
    
    unsigned long long int sum1,sum2,sum3;
    sum1=sum2=sum3=0;
    
    
    for(i=0;i<m;i++){
        cin>>a[i];
        sum1+=a[i];
    } 
    for(i=0;i<n;i++){
        cin>>b[i];
        sum2+=b[i];
    }  
    for(i=0;i<o;i++){
        cin>>c[i];
        sum3+=c[i];
    } 
    long int top1,top2,top3;
    top1=top2=top3=0;
    
    while(sum1!=sum3 || sum1!=sum2){
        if(max(sum1,sum2,sum3)==sum1){
            sum1-=a[top1];
            top1++;
            if(top1>=m){
                cout<<"0";
                return 0;
            }            
                
        }
        else if(max(sum1,sum2,sum3)==sum2){
            sum2-=b[top2];
            top2++;
            if(top2>=n){
                cout<<"0";
                return 0;
            }
        }
        else{
            sum3-=c[top3];
            top3++;
            if(top3>=o){
                cout<<"0";
                return 0;
            }
        }
    }
    cout<<sum1;
    
    return 0;
}
