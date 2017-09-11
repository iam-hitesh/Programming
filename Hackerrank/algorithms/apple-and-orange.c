#include <stdio.h>
#include <stdlib.h>

int main(){
  int s,t;  
  scanf("%d %d",&s,&t);
  int a, b; 
  scanf("%d %d",&a,&b);
  int m, n;
  scanf("%d %d",&m,&n);
  
  int *apple = malloc(sizeof(int) * m);
  int appleCount = 0;
  for(int i = 0; i < m; i++){
    scanf("%d",&apple[i]);
    if(a+apple[i] >= s && a+apple[i] <= t){
      appleCount++;
    }
  }
  int *orange = malloc(sizeof(int) * n);
  int orangeCount = 0;
  for(int i = 0; i < n; i++){
    scanf("%d",&orange[i]);
    if(b+orange[i] >= s && b+orange[i] <= t){
       orangeCount++;
    }
  }
  printf("%d\n%d", appleCount, orangeCount);
  return 0;
}
