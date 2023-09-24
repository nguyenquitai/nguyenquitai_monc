#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile; // Đối tượng ifstream để đọc dữ liệu từ tệp tin
    int so; // Số nguyên đọc từ tệp tin

    // Mở tệp tin để đọc.
    inputFile.open("ListOfNumbers.txt");

    // Đọc các số từ tệp tin và hiển thị chúng.
    while (inputFile >> so)
    {
        cout << so << endl;
    }

    // Đóng tệp tin.
    inputFile.close();

    return 0;
}
