#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int soHocSinh; // Số học sinh
    int soBaiKiemTra; // Số bài kiểm tra cho mỗi học sinh
    double tong, diemTrungBinh; // Biến tích lũy cho tổng điểm và điểm trung bình

    // Thiết lập định dạng xuất số thập phân
    cout << fixed << showpoint << setprecision(1);

    // Nhập số lượng học sinh
    cout << "Chương trình tính điểm trung bình của các bài kiểm tra.\n";
    cout << "Bạn có bao nhiêu học sinh? ";
    cin >> soHocSinh;

    // Nhập số lượng bài kiểm tra cho mỗi học sinh
    cout << "Mỗi học sinh có bao nhiêu bài kiểm tra? ";
    cin >> soBaiKiemTra;

    // Xác định điểm trung bình của từng học sinh
    for (int hocSinh = 1; hocSinh <= soHocSinh; hocSinh++)
    {
        tong = 0; // Khởi tạo biến tích lũy tổng điểm

        for (int baiKiemTra = 1; baiKiemTra <= soBaiKiemTra; baiKiemTra++)
        {
            double diem;
            cout << "Nhập điểm cho bài kiểm tra thứ " << baiKiemTra << " của học sinh thứ " << hocSinh << ": ";
            cin >> diem;
            tong += diem;
        }

        diemTrungBinh = tong / soBaiKiemTra;
        cout << "Điểm trung bình của học sinh thứ " << hocSinh << " là " << diemTrungBinh << ".\n\n";
    }

    return 0;
}
