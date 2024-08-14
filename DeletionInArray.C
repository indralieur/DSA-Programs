#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100], size = 0, pos, i;
    printf("ENTER SIZE OF ARRAY: ");
    scanf("%d",&size);
    printf("\nENTER ARRAY ELEMENTS: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nARRAY ELEMENTS WITH THEIR INDICES: \n{");
    for(i = 0; i < size; i++)
    {
        printf("  %d  ",a[i]);
    }
    printf("} \n{");
    for(i = 0; i < size; i++)
    {
        printf("  %d  ",i);
    }
    printf("}");
    printf("\nENTER POSITION OF THE ELEMENT YOU WANT TO DELETE: ");
    scanf("%d",&pos);
    if(pos >= size || pos < 0)
    {
        printf("\nDELETION IS NOT POSSIBLE AS THE POSITON DOES NOT EXIST.");
    }
    else
    {
        for(i = pos; i < size; i++)
        {
            a[i] = a[i + 1];
        }
        size--;
        printf("\nARRAY AFTER DELETION OF ELEMENT: \n");
        for(i = 0; i < size; i++)
        {
         printf("  %d  ",a[i]);
        }
    }
    getch();
}