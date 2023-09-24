#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int soLuongDVD = 1; // Bộ đếm số lượng DVD
    int soLuongDVDThue; // Số lượng DVD được thuê
    double tongPhi = 0.0; // Biến tổng cộng
    char phienBanHienTai; // Phien bản hiện tại, Y hoặc N

    // Nhập số lượng DVD.
    cout << "Có bao nhiêu DVD được thuê? ";
    cin >> soLuongDVDThue;

    // Xác định phí thuê.
    do
    {
        if ((soLuongDVD % 3) == 0)
        {
            cout << "DVD #" << soLuongDVD << " miễn phí!\n";
            continue; // Bắt đầu ngay lần lặp tiếp theo
        }

        cout << "DVD #" << soLuongDVD;
        cout << " là phien bản hiện tại? (Y/N) ";
        cin >> phienBanHienTai;

        if (phienBanHienTai == 'Y' || phienBanHienTai == 'y')
            tongPhi += 3.50;
        else
            tongPhi += 2.50;
    } while (soLuongDVD++ < soLuongDVDThue);

    // Hiển thị tổng cộng.
    cout << fixed << showpoint << setprecision(2);
    cout << "Tổng cộng là $" << tongPhi << endl;

    return 0;
}
