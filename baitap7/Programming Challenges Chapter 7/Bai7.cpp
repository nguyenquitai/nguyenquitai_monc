#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    string tenTep;
    cout << "Nhập tên tệp chứa dãy số: ";
    cin >> tenTep;

    ifstream file(tenTep);
    if (!file.is_open()) {
        cout << "Không thể mở tệp " << tenTep << endl;
        return 1;
    }

    vector<int> mangSo;
    int so;
    
    // Đọc dãy số từ tệp và lưu vào vector
    while (file >> so) {
        mangSo.push_back(so);
    }

    file.close();

    if (mangSo.empty()) {
        cout << "Tệp rỗng." << endl;
        return 1;
    }

    // Tìm số thấp nhất
    int minSo = mangSo[0];
    for (int i = 1; i < mangSo.size(); ++i) {
        if (mangSo[i] < minSo) {
            minSo = mangSo[i];
        }
    }

    // Tìm số cao nhất
    int maxSo = mangSo[0];
    for (int i = 1; i < mangSo.size(); ++i) {
        if (mangSo[i] > maxSo) {
            maxSo = mangSo[i];
        }
    }

    // Tính tổng
    int tong = 0;
    for (int i = 0; i < mangSo.size(); ++i) {
        tong += mangSo[i];
    }

    // Tính trung bình cộng
    double trungBinh = static_cast<double>(tong) / mangSo.size();

    // Hiển thị kết quả
    cout << "Số thấp nhất trong mảng: " << minSo << endl;
    cout << "Số cao nhất trong mảng: " << maxSo << endl;
    cout << "Tổng các số trong mảng: " << tong << endl;
    cout << "Trung bình cộng của các số trong mảng: " << trungBinh << endl;

    return 0;
}
