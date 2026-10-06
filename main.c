#include <stdio.h>

int main()
{
    int O, M;

    scanf("%d %d", &O, &M);

    if (O >= M)
    {
        printf("COUPON APPLIED");
    }
    else
    {
        printf("COUPON NOT APPLIED");
    }

    return 0;
}
