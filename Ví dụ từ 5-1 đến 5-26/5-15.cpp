#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream taoTepTin; // Đối tượng ofstream để ghi dữ liệu vào tệp tin
    taoTepTin.open("demofile.txt"); // Mở tệp tin "demofile.txt" để ghi dữ liệu vào

    cout << "Bây giờ đang ghi dữ liệu vào tệp tin.\n";

    // Ghi bốn tên vào tệp tin
    taoTepTin << "Bach\n";
    taoTepTin << "Beethoven\n";
    taoTepTin << "Mozart\n";
    taoTepTin << "Schubert\n";

    // Đóng tệp tin
    taoTepTin.close();

    cout << "Hoàn thành.\n";
    return 0;
}
