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

    printf("\nDay so vua nhap la:");
    for ( i = 0; i < n; i++)
    {
        
        printf("%2d ", arr[i]);   
    }

    //So chan chia het cho 3 tu tren xuong
    int tmp, d = 0;
    for ( i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (arr[i] % 3 == 0)
            {
                tmp = arr[i];
                arr[i] = arr[d];
                arr[d] = tmp;
                d ++;
            }
        }
        
    }
    

    int k = n - 1;
    
    //So le chia het cho 3 tu duoi len
    for ( i = n - 1; i >= 0; i--)
    {
        if ((arr[i] - 1) % 2 == 0)
        {
            if (arr[i] % 3 == 0)
            {
                tmp = arr[i];
                arr[i] = arr[k];
                arr[k] = tmp;
                k --;
            }
        }
        
    }

    printf("\nDay so sau khi sap xep la:");
    for ( i = 0; i < n; i++)
    {
        
        printf("%2d ", arr[i]);   
    }



}