// Chương trình này hiển thị các số từ 1 đến 10 và bình phương của chúng.
#include <iostream>
using namespace std;

int main()
{
    const int SO_MIN = 1; // Giá trị bắt đầu
    const int SO_MAX = 10; // Giá trị kết thúc
    int so;

    cout << "Số    Bình phương của số\n";
    cout << "-------------------------\n";

    for (so = SO_MIN; so <= SO_MAX; so++)
    {
        cout << so << "\t\t" << (so * so) << endl;
    }

    return 0;
}
