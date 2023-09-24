#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream taoTepTin; // Đối tượng ofstream để ghi dữ liệu vào tệp tin
    string ten1, ten2, ten3; 

    // Mở tệp tin đầu ra.
    taoTepTin.open("Friends.txt"); 

    // Nhập tên của ba người bạn.
    cout << "Nhập tên của ba người bạn.\n"; 
    cout << "Bạn thứ nhất: "; 
    cin >> ten1; 
    cout << "Bạn thứ hai: "; 
    cin >> ten2; 
    cout << "Bạn thứ ba: "; 
    cin >> ten3; 

    // Ghi tên vào tệp tin.
    taoTepTin << ten1 << endl; 
    taoTepTin << ten2 << endl; 
    taoTepTin << ten3 << endl; 
    cout << "Tên đã được lưu vào tệp tin.\n"; 

    // Đóng tệp tin
    taoTepTin.close(); 
    return 0; 
}
