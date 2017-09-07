#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long *arr = malloc(sizeof(long) * 5);
    long *add = malloc(sizeof(long)*5);
    long long sum,biggest,smallest,arr_i;
    for(arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    for(arr_i = 0; arr_i < 5; arr_i++){
        sum += arr[arr_i];
    }
    for(arr_i = 0; arr_i < 5; arr_i++){
        add[arr_i] = sum - arr[arr_i];
    }
    biggest = add[0];
    for(arr_i = 0; arr_i < 5; arr_i++){
        if(biggest < add[arr_i]){
    	biggest = add[arr_i];
    }
    }
    smallest = add[0];
    for(arr_i = 0; arr_i < 5; arr_i++){
        if(smallest > add[arr_i]){
    	smallest = add[arr_i];
    }
    }
    printf("%ld %ld",smallest,biggest);
    
    return 0;
}
