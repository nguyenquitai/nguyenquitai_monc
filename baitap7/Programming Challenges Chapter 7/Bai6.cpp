#include <iostream>
#include <fstream>
using namespace std;

const int numMonths = 3;
const int numDaysPerMonth = 30;

// Hàm để đọc dữ liệu thời tiết từ tệp
void docDuLieuThoiTiet(char duLieu[][numDaysPerMonth], const char* tenTep) {
    ifstream tep(tenTep);
    if (!tep.is_open()) {
        cout << "Không thể mở tệp " << tenTep << endl;
        exit(1);
    }

    for (int i = 0; i < numMonths; ++i) {
        for (int j = 0; j < numDaysPerMonth; ++j) {
            tep >> duLieu[i][j];
        }
    }

    tep.close();
}

// Hàm để tính số ngày mưa, mây và nắng trong mỗi tháng
void tinhThongTinThoiTiet(char duLieu[][numDaysPerMonth], int &mua, int &may, int &nang) {
    mua = may = nang = 0;
    for (int i = 0; i < numMonths; ++i) {
        for (int j = 0; j < numDaysPerMonth; ++j) {
            if (duLieu[i][j] == 'R') {
                mua++;
            } else if (duLieu[i][j] == 'C') {
                may++;
            } else if (duLieu[i][j] == 'S') {
                nang++;
            }
        }
    }
}

int main() {
    char duLieu[numMonths][numDaysPerMonth];

    // Đọc dữ liệu thời tiết từ tệp RainOrShine.txt
    docDuLieuThoiTiet(duLieu, "RainOrShine.txt");

    // Tính thời tiết theo tháng
    int mua, may, nang;
    tinhThongTinThoiTiet(duLieu, mua, may, nang);

    // Tìm tháng có số ngày mưa nhiều nhất
    int maxRainMonth = 0;
    int maxRainDays = mua;
    for (int i = 1; i < numMonths; ++i) {
        int muaThangNay = 0;
        for (int j = 0; j < numDaysPerMonth; ++j) {
            if (duLieu[i][j] == 'R') {
                muaThangNay++;
            }
        }
        if (muaThangNay > maxRainDays) {
            maxRainDays = muaThangNay;
            maxRainMonth = i;
        }
    }

    // Hiển thị báo cáo
    cout << "Báo cáo thời tiết trong mùa hè:" << endl;
    cout << "Tháng 6 có " << mua << " ngày mưa, " << may << " ngày mây, và " << nang << " ngày nắng." << endl;
    cout << "Tháng 7 có " << mua << " ngày mưa, " << may << " ngày mây, và " << nang << " ngày nắng." << endl;
    cout << "Tháng 8 có " << mua << " ngày mưa, " << may << " ngày mây, và " << nang << " ngày nắng." << endl;
    cout << "Trong ba tháng, tháng " << maxRainMonth + 6 << " có số ngày mưa nhiều nhất." << endl;

    return 0;
}
