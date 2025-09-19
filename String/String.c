#include <stdio.h>
#include <string.h>

int main()
{

    char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char str2[6] = "Hello";
    char str3[] = "Hello";

    printf("str1 : %s\n", str1);
    printf("str2 : %s\n", str2);
    printf("str3 : %s\n", str3);

    char str4[20];
    char str5[20] = "Hello";

    scanf("%s", str4);

    printf("strlen : %d\n", (int)strlen(str4));
    printf("strcpy : %s\n", strcpy(str5, str4));
    printf("strcat : %s\n", strcat(str5, str4));
    printf("strcmp : %d\n", strcmp(str5, str4));
}