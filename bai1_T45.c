#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int xA, yA, xB, yB, xC, yC, xM, yM;
    float dtABC, dtMAB, dtMAC, dtMBC;

    //Nhap cac gia tri
    printf("\nNhap vao toa do diem A(x,y)= ");
    scanf (" %d %d", &xA, &yA);
    printf("\nNhap vao toa do diem B(x,y)= ");
    scanf (" %d %d", &xB, &yB);
    printf("\nNhap vao toa do diem C(x,y)= ");
    scanf (" %d %d", &xC, &yC);
    printf("\nNhap vao toa do diem M(x,y)= ");
    scanf (" %d %d", &xM, &yM);

    //tinh dien tich tam giac
    dtABC = 0.5* (float)abs((xB - xA)*(yC - yA) - (xC - xA)*(yB - yA));
    dtMAB = 0.5* (float)abs((xA - xM)*(yB - yM) - (xB - xM)*(yA - yM));
    dtMAC = 0.5* (float)abs((xA - xM)*(yC - yM) - (xB - xM)*(yA - yM));
    dtMBC = 0.5* (float)abs((xB - xM)*(yC - yM) - (xC - xM)*(yB - yM));

    //Dieu kien.
    if (dtABC == dtMAB+dtMAC+dtMBC){
        printf("\nDiem M(%d, %d) nam trong tam giac ABC.", xM, yM);
    }else if(dtMAB == 0 || dtMBC == 0 || dtMAC == 0){
        printf("\nDiem M(%d, %d) nam tren canh cua tam giac ABC.", xM, yM);
    }else printf("\nDiem M(%d, %d) nam ngoai tam giac ABC.", xM, yM);

    getchar();
    
}