#include<stdio.h>
struct complex
{
int real;
int imag;
}C[10];

 
void main (){
     int i;
     for(i=0;i<4;i++){
         printf("Enter the real and imaginary part: ");
         scanf("%d%d",&C[i].real,&C[i].imag);
     }
     for(i=0;i<4;i++){
         printf("\n %d+(%d)i",C[i].real,C[i].imag);  
     }
}


Output:
Enter the real and imaginary part: 2
3
Enter the real and imaginary part: 4
5
Enter the real and imaginary part: 6
7
Enter the real and imaginary part: 8
9
2+(3)i
 4+(5)i
 6+(7)i
 8+(9)i