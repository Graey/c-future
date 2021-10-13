#include <stdio.h>

void printMaxActivities(int s[], int f[], int n)
{
    int m;
    printf("sequence of activity \n");

    int k = 0;
    printf("%d ", k);

    for (m = 1; m < n; m++) 
    {
        if (s[m] >= f[k]) 
        {
            printf("%d ", m);
            k = m;
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of array :- ");
    scanf("%d",&n);
    int si[n],fi[n];

    for(int i=0;i<n;i++)
    {
        printf("enter starting value \n");
        scanf("%d",&si[i]);
    }
    printf("\n");

    for(int i=0;i<n;i++)
    {
        printf("enter final value \n");
        scanf("%d",&fi[i]);
    }
    printf("\n");
    printMaxActivities(si, fi, n);
    return 0;
}
