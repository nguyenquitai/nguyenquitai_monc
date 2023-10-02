#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];
    
    // Nhập giá trị vào mảng
    cout << "Nhập 10 giá trị vào mảng:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Nhập giá trị thứ " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    // Tìm giá trị lớn nhất và nhỏ nhất
    int maxVal = arr[0];
    int minVal = arr[0];
    
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    
    // Hiển thị giá trị lớn nhất và nhỏ nhất
    cout << "Giá trị lớn nhất trong mảng là: " << maxVal << endl;
    cout << "Giá trị nhỏ nhất trong mảng là: " << minVal << endl;
    
    return 0;
}
