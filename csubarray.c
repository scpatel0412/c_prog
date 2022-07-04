#include <stdio.h>


long int findSubarray(int arr[], int n){
  long int result = 0;
  int i =0, j=0,k=0;
  for(i = 0; i < n; i++){
    for(j = i; j < n ; j++){
      for(k = i; k<= j; k++ ){
        result = result +arr[k];
      }
    }
  }
  return result;
}

int main(){
  int a[] = {1,2,3};
  int n = sizeof(a)/sizeof(a[0]);
  printf("size of array = %d \n", n);
  int sum = findSubarray(a, n);
  printf("subbaray sum is %d \n", sum);
  return 0;
}
