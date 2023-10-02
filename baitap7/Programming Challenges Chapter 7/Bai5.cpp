#include <iostream>
using namespace std;

const int numMonkeys = 3;
const int numDays = 5;

// Hàm nhập dữ liệu cho lượng thức ăn của các con khỉ
void nhapDuLieu(int duLieu[][numDays]) {
    for (int i = 0; i < numMonkeys; ++i) {
        for (int j = 0; j < numDays; ++j) {
            do {
                cout << "Nhập lượng thức ăn (pound) cho con khỉ " << i + 1 << " vào ngày " << j + 1 << ": ";
                cin >> duLieu[i][j];
                if (duLieu[i][j] < 0) {
                    cout << "Lượng thức ăn không thể là số âm. Vui lòng nhập lại." << endl;
                }
            } while (duLieu[i][j] < 0);
        }
    }
}

// Hàm tính lượng thức ăn trung bình một ngày của cả gia đình khỉ
double tinhTrungBinh(int duLieu[][numDays]) {
    double tong = 0;
    for (int i = 0; i < numMonkeys; ++i) {
        for (int j = 0; j < numDays; ++j) {
            tong += duLieu[i][j];
        }
    }
    return tong / (numMonkeys * numDays);
}

// Hàm tìm lượng thức ăn ít nhất và lớn nhất trong tuần
void timMinMax(int duLieu[][numDays], int &min, int &max) {
    min = duLieu[0][0];
    max = duLieu[0][0];
    for (int i = 0; i < numMonkeys; ++i) {
        for (int j = 0; j < numDays; ++j) {
            if (duLieu[i][j] < min) {
                min = duLieu[i][j];
            }
            if (duLieu[i][j] > max) {
                max = duLieu[i][j];
            }
        }
    }
}

int main() {
    int duLieu[numMonkeys][numDays];

    // Nhập dữ liệu cho lượng thức ăn của các con khỉ
    nhapDuLieu(duLieu);

    // Tính lượng thức ăn trung bình một ngày của cả gia đình khỉ
    double trungBinh = tinhTrungBinh(duLieu);

    // Tìm lượng thức ăn ít nhất và lớn nhất trong tuần
    int min, max;
    timMinMax(duLieu, min, max);

    // Hiển thị báo cáo
    cout << "Báo cáo lượng thức ăn của các con khỉ trong tuần:" << endl;
    cout << "Lượng thức ăn trung bình một ngày của cả gia đình khỉ: " << trungBinh << " pound" << endl;
    cout << "Lượng thức ăn ít nhất trong tuần: " << min << " pound" << endl;
    cout << "Lượng thức ăn lớn nhất trong tuần: " << max << " pound" << endl;

    return 0;
}
