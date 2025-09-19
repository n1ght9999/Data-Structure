#include <stdio.h>

int main()
{

    int arr1[3];
    int arr2[3] = {1, 2, 3};
    int arr3[] = {1, 2, 3};

    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;

    printf("arr1 : ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("arr2 : ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    printf("arr3 : ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n\n");

    if (arr1 == &arr1[0])
    {
        printf("arr 과 &arr[0]는 같습니다.\n");
        printf("주소값 : %p \n\n", arr1);
    }

    int mat[2][3] = {
        {1, 2, 3},
        {4, 5}};

    mat[1][2] = 6;

    printf("mat : ");
    for (int i = 0; i < 2; i++)
    {
        printf("{");
        for (int j = 0; j < 3; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("}");
    }
}
