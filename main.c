#include <stdio.h>
 
int main () {

   int l;

   printf("Enter Array Size");
   scanf("%d", &l);
   printf("%d \n", l);

   int n[l];

   int i, j;
   i = 0;

   for(i=0; i<l; i++)
   {
        printf("Enter the value for Element[%d] : ",i);
        scanf("%d", &n[i]);
   }
   printf("The Series is : \n");
   for(i=0; i<l; i++)
        printf("%d\t", n[i]);
   printf("\n");

   char c[l];

   i = 0;

   int p = 0;

   do
   {
   	if(n[i]%2 == 0)
   	{
   		printf("Even \n");
   	}
   	else
   	{
   		for(int k = 1; k <= 0.5*(n[i]); ++k)
   		{
   			if (n[i] % k == 0) 
   			{
   				++p;
   			}
   		}

   		if(p == 1)
   		{
   			printf("Prime \n");
   		}

   		else
   		{
   			printf("Odd \n");
   		}
   	}
   	i++;
   	p = 0;
   }while(i<l);
}
