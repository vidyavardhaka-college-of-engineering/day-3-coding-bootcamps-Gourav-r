//You will be given a number 'N'. Your task is to calculate the sum of first N natural numbers(1 to N)
//Example
//input: 
//4
//output: 
//10

#include<stdio.h>

int main()
{
    int N;
    int i,sum=0;
    printf("Enter the value for N\n");
    scanf("%d", &N);

    //Write your code here
     for (i=1;i<=N;i++)
     {
     sum = sum+i;
    
     } 
       printf("sum of %d is = %d",N ,sum); 
       
       
      
    return 0;
}
