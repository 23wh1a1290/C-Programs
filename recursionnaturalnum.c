#include <stdio.h>
void printnaturalnumber(int n)
{
    if(n>0){
        printnaturalnumber(n-1);
printf("%d\n", n);
    }
}
int main()
{
    int limit;
    printf("Enter the limit of the number: ", limit);
    scanf("%d", &limit);
    printf("Natural numbers upto %d are: ", limit);
    printnaturalnumber(limit);
}