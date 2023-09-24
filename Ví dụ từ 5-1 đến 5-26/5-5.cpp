// Chương trình này tính số đội bóng đá mà một liên đoàn trẻ có thể tạo ra dựa trên số cầu thủ có sẵn.
// Kiểm tra đầu vào được thực hiện bằng vòng lặp while.
#include <iostream>
using namespace std;

int main()
{
    // Hằng số cho số cầu thủ tối thiểu và tối đa
    const int MIN_PLAYERS = 9,
              MAX_PLAYERS = 15;

    // Các biến
    int players,         // Số cầu thủ có sẵn
        teamPlayers,     // Số cầu thủ mong muốn trên mỗi đội
        numTeams,        // Số đội
        leftOver;        // Số cầu thủ dư thừa

    // Nhập số lượng cầu thủ mong muốn trên mỗi đội.
    cout << "Bạn muốn bao nhiêu cầu thủ trên mỗi đội? ";
    cin >> teamPlayers;

    // Kiểm tra đầu vào.
    while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS)
    {
        // Giải thích lỗi.
        cout << "Bạn nên có ít nhất " << MIN_PLAYERS
             << " và không nhiều hơn " << MAX_PLAYERS << " cầu thủ trên mỗi đội.\n";

        // Nhập lại đầu vào.
        cout << "Bạn muốn bao nhiêu cầu thủ trên mỗi đội? ";
        cin >> teamPlayers;
    }

    // Nhập số lượng cầu thủ có sẵn.
    cout << "Có bao nhiêu cầu thủ có sẵn? ";
    cin >> players;

    // Kiểm tra đầu vào.
    while (players <= 0)
    {
        // Nhập lại đầu vào.
        cout << "Vui lòng nhập số không âm: ";
        cin >> players;
    }

    // Tính số đội.
    numTeams = players / teamPlayers;

    // Tính số cầu thủ dư thừa.
    leftOver = players % teamPlayers;

    // Hiển thị kết quả.
    cout << "Sẽ có " << numTeams << " đội với " << leftOver << " cầu thủ dư thừa.\n";

    return 0;
}
