#include<stdio.h>

int main()
{
    int num1, num2, num3, max; 
    printf("Enter three numbers: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    if((num1 > num2) && (num1 > num3))
    {
       
        max = num1;
    }
    else if(num2 > num3)
    {
        max = num2;
    }
    else
    {
           max = num3;
    }

   
    printf("Maximum among all three numbers = %d", max);

    return 0;
}



Output:
Enter three numbers: 
30
54
12
Maximum among all three numbers = 54
