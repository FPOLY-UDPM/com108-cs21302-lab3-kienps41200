/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>
#include <math.h>

int main() {
    int choice;

    printf("===== MENU CHUONG TRINH =====\n");
    printf("1. Giai phuong trinh bac 1 (ax + b = 0)\n");
    printf("2. Giai phuong trinh bac 2 (ax^2 + bx + c = 0)\n");
    printf("3. Tinh tien dien sinh hoat\n");
    printf("0. Thoat\n");
    printf("============================\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &choice);

    switch (choice) {

        // ===== BÀI 1: PHƯƠNG TRÌNH BẬC 1 =====
        case 1: {
            float a, b;

            printf("Nhap a: ");
            scanf("%f", &a);
            printf("Nhap b: ");
            scanf("%f", &b);

            if (a == 0) {
                if (b == 0)
                    printf("Phuong trinh co vo so nghiem\n");
                else
                    printf("Phuong trinh vo nghiem\n");
            } else {
                printf("Nghiem x = %.2f\n", -b / a);
            }
            break;
        }

        // ===== BÀI 2: PHƯƠNG TRÌNH BẬC 2 =====
        case 2: {
            float a, b, c, delta;

            printf("Nhap a: ");
            scanf("%f", &a);
            printf("Nhap b: ");
            scanf("%f", &b);
            printf("Nhap c: ");
            scanf("%f", &c);

            if (a == 0) {
                if (b == 0) {
                    if (c == 0)
                        printf("Phuong trinh co vo so nghiem\n");
                    else
                        printf("Phuong trinh vo nghiem\n");
                } else {
                    printf("Nghiem x = %.2f\n", -c / b);
                }
            } else {
                delta = b * b - 4 * a * c;

                if (delta < 0) {
                    printf("Phuong trinh vo nghiem\n");
                } else if (delta == 0) {
                    printf("Phuong trinh co nghiem kep x = %.2f\n", -b / (2 * a));
                } else {
                    printf("x1 = %.2f\n", (-b + sqrt(delta)) / (2 * a));
                    printf("x2 = %.2f\n", (-b - sqrt(delta)) / (2 * a));
                }
            }
            break;
        }

        // ===== BÀI 3: TÍNH TIỀN ĐIỆN =====
        case 3: {
            int soDien;
            long tienDien = 0;

            printf("Nhap so dien tieu thu (kWh): ");
            scanf("%d", &soDien);

            if (soDien < 0) {
                printf("So dien khong hop le!\n");
            } else if (soDien <= 50) {
                tienDien = soDien * 1678;
            } else if (soDien <= 100) {
                tienDien = 50 * 1678 + (soDien - 50) * 1734;
            } else if (soDien <= 200) {
                tienDien = 50 * 1678 + 50 * 1734
                         + (soDien - 100) * 2014;
            } else if (soDien <= 300) {
                tienDien = 50 * 1678 + 50 * 1734
                         + 100 * 2014 + (soDien - 200) * 2536;
            } else if (soDien <= 400) {
                tienDien = 50 * 1678 + 50 * 1734
                         + 100 * 2014 + 100 * 2536
                         + (soDien - 300) * 2834;
            } else {
                tienDien = 50 * 1678 + 50 * 1734
                         + 100 * 2014 + 100 * 2536
                         + 100 * 2834 + (soDien - 400) * 2927;
            }

            if (soDien >= 0)
                printf("Tien dien phai dong: %ld VND\n", tienDien);

            break;
        }

        // ===== THOÁT =====
        case 0:
            printf("Thoat chuong trinh. Tam biet!\n");
            break;

        // ===== NHẬP SAI =====
        default:
            printf("Lua chon khong hop le!\n");
    }

    return 0;
}
