// Chương trình này lấy số liệu doanh số bán hàng hàng ngày trong một khoảng thời gian và tính tổng của chúng.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int ngay; // Số ngày
    double tong = 0.0; // Biến tổng, khởi tạo bằng 0.0

    // Nhập số ngày.
    cout << "Trong bao nhiêu ngày bạn có số liệu doanh số? ";
    cin >> ngay;

    // Nhập số liệu doanh số cho mỗi ngày và tích lũy tổng.
    for (int dem = 1; dem <= ngay; dem++)
    {
        double doanhSo;
        cout << "Nhập số liệu doanh số cho ngày thứ " << dem << ": ";
        cin >> doanhSo;
        tong += doanhSo; // Tích lũy tổng.
    }

    // Hiển thị tổng số liệu doanh số.
    cout << fixed << showpoint << setprecision(2);
    cout << "Tổng số liệu doanh số là $" << tong << endl;

    return 0;
}
