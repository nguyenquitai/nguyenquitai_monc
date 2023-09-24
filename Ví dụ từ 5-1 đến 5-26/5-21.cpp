#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile; // Đối tượng ofstream để ghi dữ liệu vào tệp tin
    int soNgay; // Số ngày có dữ liệu bán hàng
    double doanhSo; // Số tiền bán hàng trong một ngày

    // Nhập số ngày.
    cout << "Trong bao nhiêu ngày bạn có số liệu bán hàng? ";
    cin >> soNgay;

    // Mở tệp tin có tên là Sales.txt để ghi dữ liệu vào.
    outputFile.open("Sales.txt");

    // Nhập số liệu bán hàng cho mỗi ngày và ghi vào tệp tin.
    for (int dem = 1; dem <= soNgay; dem++)
    {
        // Nhập số liệu bán hàng trong một ngày.
        cout << "Nhập số liệu bán hàng cho ngày thứ " << dem << ": ";
        cin >> doanhSo;

        // Ghi số liệu bán hàng vào tệp tin và xuống dòng.
        outputFile << doanhSo << endl;
    }

    // Đóng tệp tin.
    outputFile.close();

    cout << "Dữ liệu đã được ghi vào Sales.txt\n";
    return 0;
}
