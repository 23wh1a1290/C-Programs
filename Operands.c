#include<stdio.h>
int main()
{
    
char operator;
  double firstOp, secondOp;
  printf("Enter an operator (+, -, *, /): \n");
  scanf("%c", &operator);
  printf("Enter two operands: \n");
  scanf("%lf %lf", &firstOp, &secondOp);

  switch (operator) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", firstOp, secondOp, firstOp + secondOp);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", firstOp, secondOp, firstOp - secondOp);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", firstOp, secondOp, firstOp * secondOp);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", firstOp, secondOp, firstOp / secondOp);
       break;
    default:
      printf("Given operator is not correct");
  }
    return 0;
}


Output:
Enter an operator (+, -, *, /): 
/
Enter two operands: 
40
7
40.0 / 7.0 = 5.7
