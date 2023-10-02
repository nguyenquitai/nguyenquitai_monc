#include <iostream>
using namespace std;

int main() {
    const int numMonths = 12;
    double rainfall[numMonths];
    
    // Nhập tổng lượng mưa cho 12 tháng
    for (int i = 0; i < numMonths; ++i) {
        do {
            cout << "Nhập tổng lượng mưa cho tháng " << i + 1 << ": ";
            cin >> rainfall[i];
            if (rainfall[i] < 0) {
                cout << "Lượng mưa không thể là số âm. Vui lòng nhập lại." << endl;
            }
        } while (rainfall[i] < 0);
    }
    
    // Tính tổng lượng mưa trong năm
    double totalRainfall = 0;
    for (int i = 0; i < numMonths; ++i) {
        totalRainfall += rainfall[i];
    }
    
    // Tìm tháng có lượng mưa cao nhất và thấp nhất
    double maxRainfall = rainfall[0];
    double minRainfall = rainfall[0];
    int maxMonth = 1; // Tháng có lượng mưa cao nhất (bắt đầu từ tháng 1)
    int minMonth = 1; // Tháng có lượng mưa thấp nhất (bắt đầu từ tháng 1)
    
    for (int i = 1; i < numMonths; ++i) {
        if (rainfall[i] > maxRainfall) {
            maxRainfall = rainfall[i];
            maxMonth = i + 1; // Cập nhật tháng có lượng mưa cao nhất
        }
        if (rainfall[i] < minRainfall) {
            minRainfall = rainfall[i];
            minMonth = i + 1; // Cập nhật tháng có lượng mưa thấp nhất
        }
    }
    
    // Tính lượng mưa trung bình hàng tháng
    double averageRainfall = totalRainfall / numMonths;
    
    // Hiển thị kết quả
    cout << "Tổng lượng mưa trong năm: " << totalRainfall << " mm" << endl;
    cout << "Lượng mưa trung bình hàng tháng: " << averageRainfall << " mm" << endl;
    cout << "Tháng có lượng mưa cao nhất là tháng " << maxMonth << " với " << maxRainfall << " mm" << endl;
    cout << "Tháng có lượng mưa thấp nhất là tháng " << minMonth << " với " << minRainfall << " mm" << endl;
    
    return 0;
}
