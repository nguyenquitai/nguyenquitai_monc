#include <iostream>
using namespace std;

// Hàm để hiển thị các số trong mảng lớn hơn số n
void hienThiSoLonHonN(int arr[], int kichThuoc, int n) {
    cout << "Cac so lon hon " << n << " trong mang la: ";
    for (int i = 0; i < kichThuoc; ++i) {
        if (arr[i] > n) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    const int kichThuocMang = 5;
    int mang[kichThuocMang] = {10, 20, 5, 30, 15};
    int soN = 15;

    hienThiSoLonHonN(mang, kichThuocMang, soN);

    return 0;
}
