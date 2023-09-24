#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double giaTri;
    char luaChon;

    cout << "Nhập một số: ";
    cin >> giaTri;
    cout << "Chương trình này sẽ tính lũy thừa của " << giaTri;
    cout << " từ 0 đến 10.\n";
    
    for (int soMu = 0; soMu <= 10; soMu++)
    {
        cout << giaTri << " lũy thừa " << soMu << " là " << pow(giaTri, soMu);
        cout << "\nNhấn Q để thoát hoặc nhấn phím bất kỳ khác ";
        cout << "để tiếp tục: ";
        cin >> luaChon;
        
        if (luaChon == 'Q' || luaChon == 'q')
            break;
    }
    
    return 0;
}
