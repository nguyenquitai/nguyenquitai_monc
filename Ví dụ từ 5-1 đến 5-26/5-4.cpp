// Chương trình này giúp kỹ thuật viên kiểm tra nhiệt độ của một chất.
#include <iostream>
using namespace std;

int main()
{
    const double MAX_TEMP = 102.5; // Nhiệt độ tối đa
    double temperature; // Để lưu trữ nhiệt độ

    // Nhập nhiệt độ hiện tại.
    cout << "Nhập nhiệt độ Celsius của chất: ";
    cin >> temperature;

    // Khi cần thiết, hướng dẫn kỹ thuật viên
    // điều chỉnh bộ điều chỉnh nhiệt độ.
    while (temperature > MAX_TEMP)
    {
        cout << "Nhiệt độ quá cao. Hãy giảm bộ\n";
        cout << "điều chỉnh nhiệt độ và đợi 5 phút.\n";
        cout << "Sau đó đo nhiệt độ Celsius lại\n";
        cout << "và nhập lại: ";
        cin >> temperature;
    }

    // Nhắc kỹ thuật viên kiểm tra lại nhiệt độ
    // sau 15 phút.
    cout << "Nhiệt độ chấp nhận được.\n";
    cout << "Hãy kiểm tra lại sau 15 phút.\n";

    return 0;
}
