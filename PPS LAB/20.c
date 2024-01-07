/* Bin to dec & vice versa */

#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n, op, sum = 0;

    printf("Enter No: ");
    scanf("%d", &n);

    printf("Enter\n 1: Convert Bin to Dec\n 2: Convert Dec to Bin\n");
    scanf("%d", &op);

    if(op == 1) goto b2d;
    else if (op == 2) goto d2b;
    else printf("Exiting!");

    b2d:
        int i=0;

        while (n>0)
        {
            sum += n%10 * pow(2, i);
            
            n /= 10;
            i++;
        }
        printf("Dcimal: %d", sum);

    d2b:
        int j=0;

        while (n>0)
        {
            sum += n%2 * pow(10, j);
            n /= 2;
            j++;
        }
        printf("Binary: %d", sum);
    

    return 0;
}
