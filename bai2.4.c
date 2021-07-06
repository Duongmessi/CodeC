#include<stdio.h>
#define MAX 50

int main()
{
    int arr[MAX], size, tmp, i, j; 
    printf("Nhap vao so luong phan tu: "); scanf("%d", &size);
    printf("\nNhap vao day so: \n"); 

    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nDay so vua nhap la: ");
    for (int i = 0; i < size; i++)
    {
        printf("%3d", arr[i]);
    }

    // for (int i = 0; i < size; i++)
    // {
    //     if(arr[i] % 5 == 0)
    //     {
    //         arr[i] = arr[size - 1];
    //         size --;
    //     }
    // }
    i=0;
    while( i < size)
    {
        if(arr[i] % 5 == 0)
        {
            arr[i] = arr[size - 1];
            size --;
            i=0;
            continue;
        }
        i++;
    }

    printf("\nDay so sau khi xoa: ");
    for (int i = 0; i < size; i++)
    {
        printf("%2d ", arr[i]);
        
    }


}