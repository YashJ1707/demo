#include <stdio.h>
int fibbo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibbo(n - 1) + fibbo(n - 2);
}
int main(int argc, char const *argv[])
{    printf("This is my first code");
    printf("ther should be a perfect sequence");

    int n;
    printf("Enter length of series\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibbo(i));
    }


    return 0;
}