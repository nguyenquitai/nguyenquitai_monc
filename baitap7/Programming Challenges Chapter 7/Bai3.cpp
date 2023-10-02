#include <iostream>
#include <string>
using namespace std;

int main() {
    const int numSalsas = 5;
    string salsaNames[numSalsas] = {"Nhẹ", "Vừa", "Ngọt", "Nóng", "Nồng nàn"};
    int salsaSales[numSalsas];

    // Nhập số lượng lọ bán cho từng loại salsa
    for (int i = 0; i < numSalsas; ++i) {
        cout << "Nhập số lượng lọ bán cho " << salsaNames[i] << ": ";
        cin >> salsaSales[i];

        // Đảm bảo số lượng không âm
        while (salsaSales[i] < 0) {
            cout << "Số lượng không thể là số âm. Vui lòng nhập lại: ";
            cin >> salsaSales[i];
        }
    }

    // Tính tổng doanh số bán hàng
    int totalSales = 0;
    for (int i = 0; i < numSalsas; ++i) {
        totalSales += salsaSales[i];
    }

    // Tìm loại salsa bán chạy nhất và bán chậm nhất
    int maxSales = salsaSales[0];
    int minSales = salsaSales[0];
    string bestSellingSalsa = salsaNames[0];
    string worstSellingSalsa = salsaNames[0];

    for (int i = 1; i < numSalsas; ++i) {
        if (salsaSales[i] > maxSales) {
            maxSales = salsaSales[i];
            bestSellingSalsa = salsaNames[i];
        }
        if (salsaSales[i] < minSales) {
            minSales = salsaSales[i];
            worstSellingSalsa = salsaNames[i];
        }
    }

    // Hiển thị báo cáo
    cout << "Báo cáo doanh số bán hàng:" << endl;
    for (int i = 0; i < numSalsas; ++i) {
        cout << "Số lượng lọ bán cho " << salsaNames[i] << ": " << salsaSales[i] << endl;
    }
    cout << "Tổng doanh số bán hàng: " << totalSales << " lọ" << endl;
    cout << "Sản phẩm bán chạy nhất: " << bestSellingSalsa << " với " << maxSales << " lọ" << endl;
    cout << "Sản phẩm bán chậm nhất: " << worstSellingSalsa << " với " << minSales << " lọ" << endl;

    return 0;
}
