// 8.) Write a program in C to print all permutations of a given string using pointers.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void permutation(char *str1, int A, int B);
void swap(char *X, char *Y);

int main()
{
    char str[10];
    system("cls");
    printf("Enter a string: ");
    fgets(str, 10, stdin);
    int length = strlen(str) - 1;

    printf("All possible permutation of a given string are:\n");
    permutation(str, 0, length-1);
    printf("\n\n");
    return 0;
}
void permutation(char *str1, int A, int B)  // her , a=2, b=2
{
    int i;
    if (A == B)
    {
        printf("%s", str1);//her , 
    }
    else
    {
        for (i = A; i <= B; i++)
        {
            swap((str1 + A), (str1 + i));   // her
            permutation(str1, A+1, B);      // 
            swap((str1 + A), (str1 + i));   //
        }
    }
}
void swap(char *X, char *Y)
{
    char temp;
    temp = *X;
    *X = *Y;
    *Y = temp;
}