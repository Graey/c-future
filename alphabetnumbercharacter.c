#include<stdio.h>

void main()
{
    char c;
    printf("Enter an element\n");
    scanf("%c",&c);

    if((c>='a' && c<='z') ||(c>='A' && c<='Z'))
        printf("The entered element is an alphabet\n");
    
    else if( (c >= 0  && c <= 47) ||  
             (c >= 58 && c <= 64) ||  
             (c >= 91 && c <= 96) ||  
             (c >= 123 && c <= 127))   
        printf("%c is a Special Character\n", c);  

    else
        printf("The entered element is a number\n");

}