/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main() {
    int soDien;
    long tienDien = 0;

    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &soDien);

    if (soDien < 0) {
        printf("So dien KHONG hop le!\n");
    }
    else if (soDien <= 50) {
        tienDien = soDien * 1678;
    }
    else if (soDien <= 100) {
        tienDien = 50 * 1678
                 + (soDien - 50) * 1734;
    }
    else if (soDien <= 200) {
        tienDien = 50 * 1678
                 + 50 * 1734
                 + (soDien - 100) * 2014;
    }
    else if (soDien <= 300) {
        tienDien = 50 * 1678
                 + 50 * 1734
                 + 100 * 2014
                 + (soDien - 200) * 2536;
    }
    else if (soDien <= 400) {
        tienDien = 50 * 1678
                 + 50 * 1734
                 + 100 * 2014
                 + 100 * 2536
                 + (soDien - 300) * 2834;
    }
    else {
        tienDien = 50 * 1678
                 + 50 * 1734
                 + 100 * 2014
                 + 100 * 2536
                 + 100 * 2834
                 + (soDien - 400) * 2927;
    }

    if (soDien >= 0) {
        printf("So tien dien phai dong: %ld VND\n", tienDien);
    }

    return 0;
}
