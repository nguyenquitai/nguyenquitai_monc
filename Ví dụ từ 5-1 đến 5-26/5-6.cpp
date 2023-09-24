// Chương trình này hiển thị danh sách các số và bình phương của chúng.
#include <iostream>
using namespace std;

int main()
{
    const int MIN_NUMBER = 1; // Số bắt đầu để tính bình phương
    const int MAX_NUMBER = 10; // Số tối đa để tính bình phương

    int num = MIN_NUMBER; // Bộ đếm

    cout << "Số    Số bình phương\n";
    cout << "-------------------------\n";

    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++; // Tăng bộ đếm.
    }

    return 0;
}
