// Chương trình này hiển thị một menu và yêu cầu người dùng chọn.
// Vòng lặp do-while lặp lại chương trình cho đến khi người dùng chọn mục 4 từ menu.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Hằng số cho các lựa chọn trong menu
    const int LUA_CHON_NGUOI_LON = 1,
              LUA_CHON_TRE_EM = 2,
              LUA_CHON_NGUY_CO = 3,
              LUA_CHON_THOAT = 4;

    // Hằng số cho mức phí hàng tháng
    const double NGUOI_LON = 40.0,
                 TRE_EM = 20.0,
                 NGUY_CO = 30.0;

    int luaChon; // Lựa chọn từ menu
    int thang;   // Số tháng
    double phi;  // Phí hàng tháng

    // Cài đặt định dạng xuất số thập phân
    cout << fixed << showpoint << setprecision(2);

    do
    {
        // Hiển thị menu.
        cout << "\n\t\tMenu Đăng ký Hội viên Câu lạc bộ Sức khỏe\n\n"
             << "1. Đăng ký Người lớn\n"
             << "2. Đăng ký Trẻ em\n"
             << "3. Đăng ký Người cao tuổi\n"
             << "4. Thoát chương trình\n\n"
             << "Nhập lựa chọn của bạn: ";
        cin >> luaChon;

        // Xác minh lựa chọn trong menu.
        while (luaChon < LUA_CHON_NGUOI_LON || luaChon > LUA_CHON_THOAT)
        {
            cout << "Vui lòng nhập một lựa chọn hợp lệ: ";
            cin >> luaChon;
        }

        // Xử lý lựa chọn của người dùng.
        if (luaChon != LUA_CHON_THOAT)
        {
            // Nhập số tháng.
            cout << "Trong bao nhiêu tháng? ";
            cin >> thang;

            // Xử lý theo lựa chọn của người dùng.
            switch (luaChon)
            {
            case LUA_CHON_NGUOI_LON:
                phi = thang * NGUOI_LON;
                break;
            case LUA_CHON_TRE_EM:
                phi = thang * TRE_EM;
                break;
            case LUA_CHON_NGUY_CO:
                phi = thang * NGUY_CO;
                break;
            }

            // Hiển thị phí hàng tháng.
            cout << "Tổng phí là $" << phi << endl;
        }

    } while (luaChon != LUA_CHON_THOAT);

    return 0;
}
