// Chương trình này chuyển đổi tốc độ từ 60 km/h đến 130 km/h (khoảng cách 10 km/h) sang mph.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Hằng số cho các tốc độ
    const int BAT_DAU_KPH = 60, // Tốc độ khởi đầu
              KET_THUC_KPH = 130, // Tốc độ kết thúc
              TANG_THEM = 10; // Tốc độ tăng thêm

    // Hằng số cho hệ số chuyển đổi
    const double HE_SO_CHUYEN_DOI = 0.6214;

    int kph;    // Lưu tốc độ trong km/h
    double mph; // Lưu tốc độ trong mph

    // Thiết lập định dạng xuất số thập phân
    cout << fixed << showpoint << setprecision(1);

    // Hiển thị tiêu đề bảng
    cout << "KPH\tMPH\n";
    cout << "---------------\n";

    // Hiển thị các tốc độ
    for (kph = BAT_DAU_KPH; kph <= KET_THUC_KPH; kph += TANG_THEM)
    {
        // Tính toán tốc độ mph
        mph = kph * HE_SO_CHUYEN_DOI;

        // Hiển thị tốc độ trong km/h và mph
        cout << kph << "\t" << mph << endl;
    }

    return 0;
}
