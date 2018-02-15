#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    int d;
    int temp;
    int *array = (int *)malloc(sizeof(int) * n);
    
    scanf("%d", &n);
    scanf("%d", &d);
    
    for(int i = 0; i < n; i++){
        temp = i - d;
        if(temp < 0){
            temp = temp + n;
        }
        scanf("%d", &array[temp]);
    }
    
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
   
    return 0;
}
