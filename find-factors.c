#include <stdio.h>
 
int main()
{
  int i, Number; 
   
  printf("\n Please Enter any number to Find Factors \n");
  scanf("%d", &Number);
 
  printf("\n Factors of the Given Number are:\n");
  for (i = 1; i <= Number; i++)
   {
     if(Number%i == 0)
        {
		 printf(" %d  ", i);
		}
   }
 
  return 0;
}
