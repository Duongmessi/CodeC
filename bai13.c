#include<stdio.h>
#include<math.h>
#include<string.h>

//viet ct con tinh ham.
float hamFX(float x)
{
    double ketQua;
    if (fabs(x) < 2)
    {
        ketQua = pow(4-x*x, (double)1/3) + 1;
    }

    if(fabs(x) == 2)
    {
        ketQua = 7;
    }

    if (fabs(x) > 2)
    {
        ketQua = exp(x*x*x + 1) +  log(x*x - 1) / log(5);
    }
    return ketQua;
}

int main()
{
    float max, arr[100];
    int i, count = 0;

    printf("\nNhap vao so luong phan tu: ");
    scanf("%d", &count);

    for ( i = 0; i < count; i++)
    {
        printf("\nArr[%d]= ", i);
        scanf("%f", &arr[i]);
    }

    for ( i = 0; i < count; i++)
    {
        printf("\nGia tri cua Fx ung voi Arr[%d]= %.2f", i, hamFX(arr[i]));
    }
    printf("\n");

    //tim max.
    max = hamFX(arr[0]);
    for ( i = 0; i < count; i++)
    {
        if (max < hamFX(arr[i]))
        {
            max = hamFX(arr[i]);
        }
    }
    printf("\nGia tri lon nhat cua FX trong day cac so tren la: %.2f", max);
    
    i=0;
    while (1)
    {
        printf("\nNhap vao gia tri x thu %d: ", i+1);
        scanf("%f", &arr[i]);

        if(hamFX(arr[i]) > max) 
        {
            printf("\nDa vuot qua gioi han cua max !!!");
            break;
        }

        i++;

        if (i == 100)
        {
            printf("\nDa vuot qua gioi han cua 100 so !!!");
            break;
        }
        
    }
    
    
    


}