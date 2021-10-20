/*
  Converting miles to kilometers
  Hector Quemada
  March 19. 2020
  */

  #include <stdio.h>

int main(void)
  {
    double miles, yards, kilometers;

    printf("Enter miles: \n" );
    scanf("%lf", &miles);
    kilometers = 1.609 * miles ;
    printf("\n %lf miles is %lf kilometers.\n", miles, kilometers );
    return 0;
  }
