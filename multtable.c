#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the rows: ");
    scanf("%d", &rows);
    for(int i=1; i<=rows;i++)
    {
        printf("%d * %d = %d\n", 5,i,5*i);
    }
}


Output:
Enter the rows: 10
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
