#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile; // Đối tượng ifstream để đọc dữ liệu từ tệp tin
    string tenTep; // Tên tệp tin được nhập từ người dùng
    int so; // Số nguyên đọc từ tệp tin

    // Nhập tên tệp tin từ người dùng.
    cout << "Nhập tên tệp tin: ";
    cin >> tenTep;

    // Mở tệp tin.
    inputFile.open(tenTep);

    // Nếu tệp tin mở thành công, xử lý nó.
    if (inputFile)
    {
        // Đọc các số từ tệp tin và hiển thị chúng.
        while (inputFile >> so)
        {
            cout << so << endl;
        }

        // Đóng tệp tin.
        inputFile.close();
    }
    else
    {
        // Hiển thị thông báo lỗi.
        cout << "Lỗi khi mở tệp tin.\n";
    }

    return 0;
}
