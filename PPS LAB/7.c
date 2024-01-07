#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c, max;

    scanf("%d%d%d", &a, &b, &c);

    max = (a>=b&&a>=c) ? a : ((b>=a&&b>=c)?b:c);

    printf("%d", max);

    if (max%2==0) printf("even");
    else printf("Odd");
    
    return 0;
}
