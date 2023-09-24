#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream taoTepTin; // Đối tượng ofstream để ghi dữ liệu vào tệp tin
    taoTepTin.open("demofile.txt"); // Mở tệp tin "demofile.txt" để ghi dữ liệu vào

    cout << "Bây giờ đang ghi dữ liệu vào tệp tin.\n";

    // Ghi bốn tên vào tệp tin trên cùng một dòng
    taoTepTin << "Bach";
    taoTepTin << "Beethoven";
    taoTepTin << "Mozart";
    taoTepTin << "Schubert";

    // Đóng tệp tin
    taoTepTin.close();

    cout << "Hoàn thành.\n";
    return 0;
}
