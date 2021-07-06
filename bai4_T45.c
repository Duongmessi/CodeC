/*Năm nhuận là năm chia hết cho 400
Năm nhuận là năm chia hết cho 4 nhưng không chia hết cho 100*/
#include<stdio.h>

int main()
{
    int year;
    printf("Nhap vao nam ban muon kiem tra: ");
    scanf("%d", &year);

    if(year%400 == 0) printf("\nNam %d la nam nhuan. ", year);
    if(year%4 == 0 && year % 100 != 0){
        printf("\nNam %d la nam nhuan. ", year);
    } else printf("\nNam %d khong la nam nhuan. ", year);


}