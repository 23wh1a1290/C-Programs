#include <stdio.h>
int sumArray(int A[],int n)
   {
  if(n==0)
  {
    return 0;
}
else{
    return A[n-1]+sumArray(A,n-1);
}
}
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    
    
    printf("Sum of array elements is: %d", sumArray(A,n));
    
    return 0;
}