#include <stdio.h>

int main()
{
    int k;
    printf("enter k:");
    scanf("%d",&k);
    if(k>0)
    {
        printf("positive");
    }
    else if(k<0)
    {
        printf("neagtive");
    }
    else
    {
        printf("zero");
    }
    return 0;
}
