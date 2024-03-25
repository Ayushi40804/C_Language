//Write a program to concatenate two strings without using any library function.
#include <stdio.h>

int main() 
{
    char str1[200], str2[200];
    int i, j;

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);
    
    for (i = 0; str1[i] != '\0'; i++);
    str1[i++]=' ';
    for (j = 0; str2[j] != '\0'; j++) {
        str1[i++] = str2[j];
    }
    str1[i] = '\0';
    printf("Concatenated string: %s", str1);
    return 0;
}