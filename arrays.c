#include<stdio.h>
void main (){
     int arr[5],i,sum=0;
     for(i=0;i<5;i++){
         printf("\nEnter the array elements: ");
         scanf("%d",&arr[i]);
     }
     for(i=0;i<5;i++){
         printf("%3d",arr[i]);
         sum = sum +arr[i];
     }
     printf("\nThe sum of array elements is %d",sum);
     float avg;
     avg= sum/10;
     printf("\n The average of array elements is %f",avg);
     int max_element;
     max_element=arr[0];
     for(i=0;i<5;i++){
         if(arr[i]>max_element)
              max_element=arr[i];
     }
     printf("\n Maximum element in the array is %d",max_element);         
     int min_element;
     min_element=arr[0];
     for(i=0;i<5;i++){
         if(arr[i]<min_element)
              min_element=arr[i];
     }         
     printf("\n Minimum element in the array is %d",min_element);
     
}     
  

Output:
Enter the array elements: 5
Enter the array elements: 2
Enter the array elements: 7
Enter the array elements: 9
Enter the array elements: 4
5  2  7  9  4
The sum of array elements is 27
 The average of array elements is 2.000000
 Maximum element in the array is 9
Minimum element in the array is 2
    
         
         
     
         