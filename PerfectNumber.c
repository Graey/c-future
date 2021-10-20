#include<stdio.h>  
void main()  
{  
int num, rem, sum = 0;  
printf("Enter a number\n");  
scanf("%d", &num);   
for(int i = 1; i < num; i++)  
{  
    rem = num % i; 
    if (rem == 0) 
    {  
        sum += i;  
    }  
}  
if (sum == num) 
    printf("It is a Perfect Number");  
else  
    printf("It is not a Perfect Number");  
}  
