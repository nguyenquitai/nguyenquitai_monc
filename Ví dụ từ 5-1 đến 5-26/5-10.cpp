// Chương trình này minh họa một vòng lặp for do người dùng điều khiển.
#include <iostream>
using namespace std;

int main()
{
    int soMin, // Số bắt đầu tính bình phương
        soMax; // Số tối đa tính bình phương

    // Nhập giá trị tối thiểu và tối đa để hiển thị.
    cout << "Tôi sẽ hiển thị một bảng số và bình phương tương ứng của chúng.\n"
         << "Nhập số bắt đầu: ";
    cin >> soMin;
    cout << "Nhập số kết thúc: ";
    cin >> soMax;

    // Hiển thị bảng.
    cout << "Số    Bình phương của số\n"
         << "-------------------------\n";

    for (int so = soMin; so <= soMax; so++)
    {
        cout << so << "\t\t" << (so * so) << endl;
    }

    return 0;
}
