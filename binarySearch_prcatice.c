#include <stdio.h>
int binarySearch(int a[], int, int);
int main()
{
    int n, pos, data;
    printf("enter the number of the elements");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of the array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the data for search");
    scanf("%d", &data);
    pos = binarySearch(a, n, data);
    if (pos >= 0)
        printf("element found and the position is %d", pos + 1);

    else
        printf("element not found");
}
int binarySearch(int a[], int n, int data)
{
    int l = 0, r = n - 1, mid;
    while (l < r)
    {
        mid = (l + r) / 2;
        if (data == a[mid])
        {
            return mid;
        }
        else if (data < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }

        return -1;
    }
}
