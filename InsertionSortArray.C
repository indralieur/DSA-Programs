#include<stdio.h>
#include<conio.h>
void main() 
{
    int arr[100], n, i, j, key;
    printf("ENTER SIZE OF ARRAY: ");
    scanf("%d", &n);
    printf("\nENTER ARRAY ELEMENTS: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("\nORIGINAL ARRAY: {");
    for (i = 0; i < n; i++) 
    {
        printf("  %d  ", arr[i]);
    }
    printf("}\n");
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("\nSORTED ARRAY: {");
    for (i = 0; i < n; i++) 
    {
        printf("  %d  ", arr[i]);
    }
    printf("}");
    getch();
}
