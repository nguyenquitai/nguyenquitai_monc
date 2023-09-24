// Chương trình này minh họa một vòng lặp while đơn giản.
#include <iostream>
using namespace std;

int main()
{
    int number = 0;

    while (number < 5)
    {
        cout << "Hello\n"; // In ra "Xin chào"
        number++; // Tăng biến number lên 1
    }
    cout << "Đó là tất cả!\n"; // In ra "Đó là tất cả!"
    return 0;
}
