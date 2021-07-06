#include<stdio.h>
#define length 50
int main()
{
    int arr[length], i, n, count=0;

    printf("\nNhap vao so luong phan tu: "); scanf("%d", &n);
    printf("\nNhap vao mot day so.\n");

    for ( i = 0; i < n; i++)
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }

    if(n>3)
    {
        for ( i = 0; i < n; i++)
        {
            if (arr[i] == (arr[i+1] + arr[i-1]) / 2 )
            {
                count ++;
            }
        }
    }

    printf("\nCo %d bo ba so thoa man.", count);

}