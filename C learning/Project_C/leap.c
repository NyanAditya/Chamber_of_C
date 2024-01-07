#include<stdio.h>

int main(int argc, char const *argv[])
{
    int year;

    printf("Enter Year: ");
    scanf("%d", &year);

    // if(year%4 == 0){
    //     if (year%100 == 0)
    //     {
    //         if (year%400 == 0)
    //         {
    //             printf("Leap Year");
                
    //         }
            
    //         else
    //         {
    //             printf("Not a Leap year");
    //         }
            
    //     }
        
    //     else
    //     {
    //         printf("Leap Year");
    //     }
        
    // }   
    
    // else
    // {
    //     printf("Not Leap Year");
    // }
    
    if (((year%4 ==0) && (year%100 !=0)) || (year%400 ==0))
    {
        printf("Leap Year");
    }
    
    else
    {
        printf("Not a Leap Year");
    }
    
    return 0;
}
