#include<stdio.h>
int main() 
{

  int i, n;
  int a = 0, b = 1;
  int c = a + b;
  printf("Enter the number : \n");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", a, b);
  for (i = 3; i <= n; ++i) {
    printf("%d, ",c);
    a = b;
    b = c;
    c = a + b;
  }

  return 0;
}


Output:
Enter the number : 
7
Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 
