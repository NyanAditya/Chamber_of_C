// A program to solve Tower of Hanoi
// Take number of disks, start and end towers as input
// No more than 3 towers are allowed
// Towers are numbered as:1, 2 & 3

#include <stdio.h>
#include <stdlib.h>

void printMove(int start, int end)
{
    printf("%d -> %d\n", start, end);
}

void Hanoi(int n_disks, int start, int end)
{
    if (n_disks == 1)
        printMove(start, end);

    else
    {
        int other = 6 - (start + end);

        Hanoi(n_disks - 1, start, other);
        printMove(start, end);
        Hanoi(n_disks - 1, other, end);
    }
}

int main()
{
    int start, end, n_disks;
    printf("Enter number of disks: ");
    scanf("%d", &n_disks);
    printf("Enter start tower: ");
    scanf("%d", &start);
    printf("Enter end tower: ");
    scanf("%d", &end);

    Hanoi(n_disks, start, end);
}