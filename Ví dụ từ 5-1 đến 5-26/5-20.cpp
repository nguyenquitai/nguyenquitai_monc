#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile; // Đối tượng ifstream để đọc số từ tệp tin
    int so1, so2, so3, tong;

    // Mở tệp tin.
    inFile.open("NumericData.txt"); 

    // Đọc ba số từ tệp tin.
    inFile >> so1; 
    inFile >> so2; 
    inFile >> so3; 

    // Đóng tệp tin.
    inFile.close(); 

    // Tính tổng của ba số.
    tong = so1 + so2 + so3; 

    // Hiển thị ba số.
    cout << "Dưới đây là các số:\n" 
         << so1 << " " << so2 
         << " " << so3 << endl; 

    // Hiển thị tổng của ba số.
    cout << "Tổng của ba số là: " << tong << endl; 
    return 0; 
}
