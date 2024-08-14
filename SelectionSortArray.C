#include<stdio.h>
#include<conio.h>
void main() 
{
    int arr[100], n, i, j, minIndex, temp;
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
    for (i = 0; i < n - 1; i++) 
    {
        minIndex = i;
        for (j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[minIndex]) 
            {
                minIndex = j;
            }
        }
        if (minIndex != i) 
        {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    printf("SORTED ARRAY: {");
    for (i = 0; i < n; i++) 
    {
        printf("  %d  ", arr[i]);
    }
    printf("}\n");

}
