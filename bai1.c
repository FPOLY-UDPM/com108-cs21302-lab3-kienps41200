/******************************************************************************
 * Họ và tên: nguyễn ngọc trung kiên
 * MSSV:      [ps41200]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC  
// Input: Nhập vào điểm của sinh viên (0-10) 
// Output: Hiển thị ra màn hình học lực của sinh viên 
// Biết rằng: 
// Học lực xuất sắc: Điểm >= 9 
// Học lực giỏi: 9 > điểm >= 8 
// Học lực khá: 8 > điểm >= 6.5 
// Học lực trung bình: 6.5 > điểm >= 5 
// Học lực yếu: 5 > điểm >= 3.5 
// Học lực kém: 3.5 > điểm

#include <stdio.h>

int main() {
    float diem;

    printf("Nhap diem trung binh: ");
    scanf("%f", &diem);

    // Kiểm tra điểm hợp lệ
    if (diem < 0 || diem > 10) {
        printf("Diem KHONG hop le!\n");
    } 
    else if (diem >= 9) {
        printf("Hoc luc: Xuat sac\n");
    } 
    else if (diem >= 8) {
        printf("Hoc luc: Gioi\n");
    } 
    else if (diem >= 6.5) {
        printf("Hoc luc: Kha\n");
    } 
    else if (diem >= 5) {
        printf("Hoc luc: Trung binh\n");
    } 
    else if (diem >= 3.5) {
        printf("Hoc luc: Yeu\n");
    } 
    else {
        printf("Hoc luc: Kem\n");
    }

    return 0;
}
