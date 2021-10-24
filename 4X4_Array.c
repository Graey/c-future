#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Arr4X4[4][4];
    int i,j;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("[%d][%d] :",i,j);
            scanf("%d",&Arr4X4[i][j]);
        }
    }

    printf("\n\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {

           printf("\t%d",Arr4X4[i][j]);
           printf("\t");

        }
        printf("\n");

    }
}
