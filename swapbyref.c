#include <stdio.h>
swap (int *, int *);
int main()
{
    int a, b;
    printf("\nEnter value of a & b: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore Swapping:\n");
    printf("\na = %d\nb = %d\n", a, b);
    swap(&a, &b);
    printf("\nAfter Swapping:\n");
    printf("\na = %d\nb = %d", a, b);
    return 0;
}
swap (int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}


Output:
Enter value of a & b: 30
40
Before Swapping:

a = 30
b = 40

After Swapping:

a = 40
b = 30
