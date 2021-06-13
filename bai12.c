#include<stdio.h>
#include<math.h>
#include<string.h>

typedef struct {
    char tenChuHo[30];
    float soDienTieuThu;
    float soTienDienPhaiTra;
}GIADINH;   

float TienDien(float soDienNangDaTieuThu, double soTienDienPhaiTra)
{
    if(soDienNangDaTieuThu < 250) 
    {
        soTienDienPhaiTra =  2000 * soDienNangDaTieuThu;
    }
        
    if (soDienNangDaTieuThu >= 250 && soDienNangDaTieuThu < 400 )
    {
        soTienDienPhaiTra =  3000 * soDienNangDaTieuThu;
    }

    if (soDienNangDaTieuThu >= 400 && soDienNangDaTieuThu < 500 )
    {
        soTienDienPhaiTra =  4000 * soDienNangDaTieuThu;
    }

    if (soDienNangDaTieuThu >= 500)
    {
        soTienDienPhaiTra =  4000 * soDienNangDaTieuThu;
    }
    return soTienDienPhaiTra;
    
}

int main()
{
    float soDienNangDaTieuThu, soTienDienPhaiTra;
    float min, tmp;
    int i = 0, count = 0, viTri;
    char tmp2[30];
    GIADINH ds[100];

    //Nhap vao.
    while (1)
    {
        printf("\nNhap vao ten chu ho thu %d: ", i+1);
        fflush(stdin);
        gets(ds[i].tenChuHo);

        if (i > 100 || strcmp(ds[i].tenChuHo, "***") == 0)
        {
            break;
        }
        
        printf("\nNhap so dien da tieu thu: ");
        scanf("%f", &ds[i].soDienTieuThu);

        i++;
        count++;
    }
    
    //Xuat ra man hinh tien cac ho phai tra.
    for ( i = 0; i < count; i++)
    {
        ds[i].soTienDienPhaiTra = TienDien(ds[i].soDienTieuThu, soTienDienPhaiTra);
        printf("\nHo so %d tieu het: %.4f VND", i+1, ds[i].soTienDienPhaiTra);
    }
    printf("\n");

    //Đưa ra màn hình hộ trả tiền điện ít nhất
    min = ds[0].soTienDienPhaiTra;
    for ( i = 0; i < count; i++)
    {
        if (min > ds[i].soTienDienPhaiTra)
        {
            min = ds[i].soTienDienPhaiTra;
            viTri = i;
        }
        
    }
    printf("\nHo tra tien dien it nhat la: %s voi %.2f VND.", ds[viTri].tenChuHo, ds[viTri].soTienDienPhaiTra);
    printf("\n");

    //• Sắp xếp danh sách theo thứ tự tăng của tiền phải trả
    for ( i = 0; i < count; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if (ds[i].soTienDienPhaiTra > ds[j].soTienDienPhaiTra)
            {
                tmp = ds[i].soTienDienPhaiTra;
                ds[i].soTienDienPhaiTra = ds[j].soTienDienPhaiTra;
                ds[j].soTienDienPhaiTra = tmp;

                strcpy(tmp2, ds[i].tenChuHo);
                strcpy(ds[i].tenChuHo, ds[j].tenChuHo);
                strcpy(ds[j].tenChuHo, tmp2);
            }
            
        }
    }
    printf("\nDanh sach theo thu tu tang cua tien phai tra: ");
    for ( i = 0; i < count; i++)
    {
        printf("\n%d. %s voi %.2f VND.", i+1, ds[i].tenChuHo, ds[i].soTienDienPhaiTra);
    }
    
}