#include<stdio.h>
#include<math.h>

float hamFX(float x)
{
    float ketQua;

    if(fabs(x) <=2 )
    {
        ketQua = sqrt(exp(2*x+1) + 1) + 7;
    }
    if(fabs(x) > 2)
    {
        ketQua = pow(x,5) + 5*pow(x,3) + x + 1;
    }
    return ketQua;
}

float hamFY(float y)
{
    float ketQua;

    if(fabs(y) <=2 )
    {
        ketQua = sqrt(exp(2*y+1) + 1) + 7;
    }
    if(fabs(y) > 2)
    {
        ketQua = pow(y,5) + 5*pow(y,3) + y + 1;
    }
    return ketQua;
}

int main()
{
    float x, y;
    float ketquaFXvaFY;

    printf("\nNhap vao x= ");
    scanf("%f", &x);
    printf("\nNhap vao y= ");
    scanf("%f", &y);

    ketquaFXvaFY = pow((hamFX(x) + hamFY(y)), 2);
    printf("\nketqua: %0.3f", ketquaFXvaFY);

    printf("\nCac cap <x, f(x)> la: ");
    float i= -5.0;
    while(i <= 3.0)
    {
        printf("\n<%.1f, %.2f>", i, hamFX(i));
        i=i+0.1;
    }
    

}