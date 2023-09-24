#include <iostream>
using namespace std;

int main()
{
    int num = 4;

    cout << num << endl; // Hiển thị 4
    cout << num++ << endl; // Hiển thị 4, sau đó cộng thêm 1 vào num
    cout << num << endl; // Hiển thị 5
    cout << ++num << endl; // Cộng thêm 1 vào num, sau đó hiển thị 6
    cout << endl; // Hiển thị một dòng trống

    cout << num << endl; // Hiển thị 6
    cout << num-- << endl; // Hiển thị 6, sau đó trừ đi 1 từ num
    cout << num << endl; // Hiển thị 5
    cout << --num << endl; // Trừ đi 1 từ num, sau đó hiển thị 4

    return 0;
}
