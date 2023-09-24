// Chương trình này tính trung bình của 3 điểm thi và lặp lại nhiều lần nếu người dùng muốn.
#include <iostream>
using namespace std;

int main()
{
    int diem1, diem2, diem3; // Ba điểm thi
    double trungBinh; // Điểm trung bình
    char tiepTuc; // Để lưu kết quả Y hoặc N

    do
    {
        // Nhập ba điểm thi.
        cout << "Nhập 3 điểm và tôi sẽ tính điểm trung bình của chúng: ";
        cin >> diem1 >> diem2 >> diem3;

        // Tính và hiển thị điểm trung bình.
        trungBinh = (diem1 + diem2 + diem3) / 3.0;
        cout << "Điểm trung bình là " << trungBinh << ".\n";

        // Người dùng có muốn tính điểm trung bình cho một bộ số khác không?
        cout << "Bạn có muốn tính điểm trung bình cho một bộ số khác không? (Y/N) ";
        cin >> tiepTuc;
    } while (tiepTuc == 'Y' || tiepTuc == 'y');

    return 0;
}
