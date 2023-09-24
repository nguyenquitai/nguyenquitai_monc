#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inputFile; // Đối tượng ifstream để đọc dữ liệu từ tệp tin
    string ten;

    inputFile.open("Friends.txt"); // Mở tệp tin "Friends.txt" để đọc dữ liệu từ đó
    cout << "Đang đọc dữ liệu từ tệp tin.\n";

    inputFile >> ten; // Đọc tên thứ nhất từ tệp tin
    cout << ten << endl; // Hiển thị tên thứ nhất

    inputFile >> ten; // Đọc tên thứ hai từ tệp tin
    cout << ten << endl; // Hiển thị tên thứ hai

    inputFile >> ten; // Đọc tên thứ ba từ tệp tin
    cout << ten << endl; // Hiển thị tên thứ ba

    inputFile.close(); // Đóng tệp tin
    return 0;
}
