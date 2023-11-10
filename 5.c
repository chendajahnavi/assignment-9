#include <stdio.h>
void main() 
{
   int arr1[100];
   int i,n, sum = 0;
   int *pt;
   
   printf("Size of array : ");
   scanf("%d",&n);
   
   printf("Input array elements : \n",n);
   for(i=0;i<n;i++){
	  printf("Element - %d : ",i+1);
	  scanf("%d",&arr1[i]);
	} 	

   pt = arr1;
 
   for (i = 0; i < n; i++) {
      sum = sum + *pt;
      pt++;
   }
 
   printf("The sum of array is : %d\n\n", sum);
}