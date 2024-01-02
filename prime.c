#include <stdio.h>
int main()
 {
 int num,i,count,n;
    printf("Enter max range: ");
    scanf("%d",&n);

    for(num = 1;num<=n;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
             printf("%d ",num);
    }

  }


Output:

Enter max range: 15
2 3 5 7 11 13 
