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
    for ( i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            min = arr[i];           
            break;
        }
    }   
    for ( i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            if (min > arr[i])
            {
                min = arr[i];
                viTri = i+1;
            } 
        }
    }
    printf("\nSo chan nho nhat trong day la: %d, o vi tri: %d", min, viTri);
}