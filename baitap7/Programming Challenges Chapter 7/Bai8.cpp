#include <iostream>
using namespace std;

const int kichThuoc = 3;

// Hàm kiểm tra xem một mảng hai chiều có phải là hình vuông ma thuật Lo Shu hay không
bool laHinhVuongMaThuat(int arr[][kichThuoc]) {
    // Tạo một mảng để lưu tổng của từng hàng, cột và đường chéo
    int tongHang[kichThuoc] = {0};
    int tongCot[kichThuoc] = {0};
    int tongCheoChinh = 0;
    int tongCheoPhu = 0;

    // Tính tổng của từng hàng, cột và đường chéo
    for (int i = 0; i < kichThuoc; ++i) {
        for (int j = 0; j < kichThuoc; ++j) {
            tongHang[i] += arr[i][j];
            tongCot[j] += arr[i][j];
            if (i == j) {
                tongCheoChinh += arr[i][j];
            }
            if (i + j == kichThuoc - 1) {
                tongCheoPhu += arr[i][j];
            }
        }
    }

    // Xác định tổng chung của hàng, cột và đường chéo
    int tongChung = tongHang[0];

    // Kiểm tra xem tổng của từng hàng, cột và đường chéo có bằng nhau và bằng tổng chung không
    for (int i = 1; i < kichThuoc; ++i) {
        if (tongHang[i] != tongChung || tongCot[i] != tongChung) {
            return false;
        }
    }

    if (tongCheoChinh != tongChung || tongCheoPhu != tongChung) {
        return false;
    }

    return true;
}

int main() {
    int arr[kichThuoc][kichThuoc];

    cout << "Nhập ma trận " << kichThuoc << "x" << kichThuoc << " (chứa các số từ 1 đến 9):" << endl;
    for (int i = 0; i < kichThuoc; ++i) {
        for (int j = 0; j < kichThuoc; ++j) {
            cin >> arr[i][j];
        }
    }

    if (laHinhVuongMaThuat(arr)) {
        cout << "Đúng! Đây là một hình vuông ma thuật Lo Shu." << endl;
    } else {
        cout << "Không phải hình vuông ma thuật Lo Shu." << endl;
    }

    return 0;
}
