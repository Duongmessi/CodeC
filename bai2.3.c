#include<stdio.h>
#define length 50

int main()
{
    int arr[length], i, n, x, k, tmp = 0, tmp2 = 0;
    

    printf("\nNhap vao so luong phan tu: "); scanf("%d", &n);
    printf("\nNhap vao mot day so. \n");

    for ( i = 0; i < n; i++)
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nDay so vua nhap la:");
    for ( i = 0; i < n; i++)
    {
        
        printf("%2d ", arr[i]);   
    }

    for ( i = 0; i < n; i++)
    {
        for (int j = i+1 ; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;

            }
        }    
    }
    printf("\n\nDay so sau khi sap xep: ");
    for (i = 0; i < n; i++)
    {
        printf("%2d ", arr[i]);
    }

    printf("\nNhap vao mot so x= "); scanf("%d", &x);

    n+=1;
    arr[n-1] = x;

    for ( i = 0; i < n; i++)
    {
        for (int j = i+1 ; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;

            }
        }
    }
    printf("\n\nDay so sau khi sap xep lan 2: ");
    for (i = 0; i < n; i++)
    {
        printf("%2d ", arr[i]);
    }
    
}