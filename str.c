#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int length;
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    strcpy(str3, str1);
    printf("strcpy(str3, str1) = %s \n", str3);
    strcat(str1, str2);
    printf("strcat(str1, str2) = %s \n", str1);
    length = strlen(str1);
    printf("length of string = %d \n", length);
    getch();
}