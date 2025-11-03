
#include <stdio.h>

int main()
{
    int i,j,n,f;
    printf("enter n and f");
    scanf("%d",&n);
    scanf("%d",&f);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=f;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
