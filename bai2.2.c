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

    printf("\nNhap so ban muon chen x= "); scanf("%d", &x);
    printf("\nNhap vi tri ban muon chen trong day: k= "); scanf("%d", &k);
    
    if(k > n) 
    {
        n++;
        arr[n-1] = x;

    }
    else
    {
        for ( i = 0; i < n; i++)
        {
            if(i+1 == k)
            {
                tmp = arr[i];
                arr[i] = x;
                n++; 
            
            }

        }
        for ( i = k - 1; i < n; i++)
        {
            tmp2 = arr[i+1];
            arr[i+1] = tmp;
            tmp = tmp2;
        }
    }
      
    printf("\nDay so sau khi sap xep la:");
    for ( i = 0; i < n; i++)
    {
        
        printf("%2d ", arr[i]);   
    }


}