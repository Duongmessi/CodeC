#include<stdio.h>
#define length 50

int main()
{
    int arr[length], i, n, min, viTri;

    printf("\nNhap vao so luong phan tu: "); scanf("%d", &n);
    printf("\nNhap vao mot day so. \n");

    for ( i = 0; i < n; i++)
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    min = arr[0];

    for ( i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
         
    }
    printf("\nSo be nhat la: %d", min);
    for ( i = 0; i < n; i++)
    {
         if (min == arr[i])
        {
            viTri = i;
            printf("\nVi tri thu: %d bang so be nhat.", viTri + 1);
        }
    }
    
}