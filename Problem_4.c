//Your task here is to print half pyramid of stars.

#include<stdio.h>


int main()
{
  	int a, b, n;

  	scanf("%d", &n);

  	//Write your code here
  	for(a=0;a<=n;a++)
    {
      for(b=1;b<=a;b++){
        printf("*");
      }
      printf("\n");
    }

  	return 0;
}
