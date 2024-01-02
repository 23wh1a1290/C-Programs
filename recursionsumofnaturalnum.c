#include<stdio.h>
int sumofnaturalnum(int n)
{
    if(n==0){
    return 0;
    }

return n + sumofnaturalnum(n-1);

}
int main()
{
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    int sum = sumofnaturalnum(n);
        printf("Sum of natural numbers is upto %d is : %d\n",n,sum);
    }
