#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile; // Đối tượng ifstream để đọc dữ liệu từ tệp tin
    int so; // Số nguyên đọc từ tệp tin

    // Mở tệp tin.
    inputFile.open("BadListOfNumbers.txt");

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
