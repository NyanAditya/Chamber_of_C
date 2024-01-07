#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int c=1, dig_len, sum=0, temp;
    while(c<=100000000)
    {
        dig_len = log10(c)+1;
        sum = 0;
        temp = c;
        
        for(int i=0; i<dig_len; i++)
        {
            sum += pow(temp%10, dig_len);
            temp /= 10;
        }

        if(sum == c) printf("%d\n", c);
        c++;
    }
    return 0;
}
