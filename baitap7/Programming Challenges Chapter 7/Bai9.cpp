#include <iostream>
using namespace std;

const int kichThuocMang = 7;

int main() {
    int empId[kichThuocMang] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int gio[kichThuocMang];
    double payRate[kichThuocMang];
    double tienLuong[kichThuocMang];

    // Nhập số giờ làm việc và mức lương cho từng nhân viên
    for (int i = 0; i < kichThuocMang; ++i) {
        cout << "Nhập số giờ làm việc cho nhân viên có mã số " << empId[i] << ": ";
        cin >> gio[i];

        // Xác thực đầu vào: Không chấp nhận giá trị âm cho số giờ
        while (gio[i] < 0) {
            cout << "Số giờ làm việc không thể là số âm. Vui lòng nhập lại: ";
            cin >> gio[i];
        }

        cout << "Nhập mức lương cho nhân viên có mã số " << empId[i] << ": ";
        cin >> payRate[i];

        // Xác thực đầu vào: Không chấp nhận giá trị âm hoặc dưới $15.00 cho mức lương
        while (payRate[i] < 15.00) {
            cout << "Mức lương không thể là số âm hoặc dưới $15.00. Vui lòng nhập lại: ";
            cin >> payRate[i];
        }

        // Tính tổng tiền lương cho từng nhân viên
        tienLuong[i] = gio[i] * payRate[i];
    }

    // Hiển thị thông tin mã số nhận dạng và tổng tiền lương của từng nhân viên
    cout << "\nThông tin tiền lương của từng nhân viên:" << endl;
    for (int i = 0; i < kichThuocMang; ++i) {
        cout << "Nhân viên có mã số " << empId[i] << " có tổng tiền lương: $" << tienLuong[i] << endl;
    }

    return 0;
}
