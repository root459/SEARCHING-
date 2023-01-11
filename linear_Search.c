#include <stdio.h>
int main()
{
    int n, data;
    printf("enter the number of the elements\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the data for search\n");
    scanf("%d", &data);
    for (int i = 0; i < n; i++)
    {
        if (data == a[i])
        {
            printf("element found and position is %d\n", i + 1);
            break;
        }
        if (i == n)
        {
            printf("element not found\n");
        }
    }
}