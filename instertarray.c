#include <stdio.h>

int main(){


  int a[3];
  int size = sizeof(a)/sizeof(a[0]);

  for(int i = 0; i < size ; i++){
    printf("enter elements\n");
    scanf("%d", &a[i]);
  }

  for(int i = 0; i < size; i++){
    printf("list of array %d\n",a[i] );
  }
  printf("size of array = %d", size);
  return 0;
}
