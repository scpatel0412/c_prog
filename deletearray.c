#include <stdio.h>

int main(){
  int pos, num, sizeofarray;
   int a[50];

   printf("enter number element in arr \n");
   scanf("%d", &num);
   printf("\n no of element you want %d \n",num);

   for (int i = 0; i < num; i++ )
   {
    printf ("  enter element: \n" );
    scanf (" %d", &a[i]);
   }

   for(int i=0;i<num;i++){
     printf("\n enter element: %d \n",a[i]);
   }
   printf("\n define postion of array you want to delete \n");
   scanf("%d",&pos);

   printf("postion is %d \n",pos);

   if(pos >= num+1){
     printf("\n deletion is not possible\n");
   }
   else{
     for(int i= pos-1 ; i< num-1; i++){
       a[i] =a[i+1];
     }
     printf("\n resultant array is\n");

     for(int i=0; i<num-1; i++){
       printf("%d\n",a[i]);
     }
   }
   return 0;

}
