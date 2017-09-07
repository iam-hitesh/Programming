#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j,num; 
    scanf("%d",&n);
    for(int j=0;j<n;j++){
            for(int i=1;i<=n;i++){
                if(i < n - j)
                    printf(" ");
                else
                    printf("#");
            }
            printf("\n");
        }
}
