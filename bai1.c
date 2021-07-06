#include<stdio.h>
#define MAX 50

int main()
{
    int arr[MAX], i, n, S=0 , P=1;
    int count = 0;

    printf("\nNhap vao so luong mang n= "); scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("\narr[%d]= ", i);
        scanf("%d",&arr[i]);
        
    }
    //Tong va tich
    for ( i = 0; i < n; i++)
    {
        S += arr[i];
        P *= arr[i];
    }
    printf("\nTong cua day so tren la: %d", S);
    printf("\nTich cua day so tren la: %d", P);
    //cac so chia het cho 3 va lon hon 10.
    printf("\nCac so chia het cho 3 va lon hon 10 la: ");
    for ( i = 0; i < n; i++)
    {
       if (arr[i] % 3 == 0 && arr[i] > 10) 
       {
           printf("%d ", arr[i]);
       }
    }   
    //cac so nam trong doan.
    for ( i = 0; i < n; i++)
    {
        if (arr[i] >= 100 && arr[i] <= 1000)
        {
            count++;
        }   
    }
    printf("\nCo %d so nam trong doan [100;1000]", count);
}