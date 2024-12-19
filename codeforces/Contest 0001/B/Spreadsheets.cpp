#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

// Hàm chuyển cột dạng số sang ký hiệu chữ cái
string numberToColumn(int number) {
    string column = "";
    while (number > 0) {
        number--;
        column = char('A' + (number % 26)) + column;
        number /= 26;
    }
    return column;
}

// Hàm chuyển cột dạng ký hiệu chữ cái sang số
int columnToNumber(string column) {
    int number = 0;
    for (char ch : column) {
        number = number * 26 + (ch - 'A' + 1);
    }
    return number;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        string input;
        cin >> input;

        // Kiểm tra xem đầu vào là dạng "RXCY" hay "ColumnNumber"
        if (input[0] == 'R' && isdigit(input[1]) && input.find('C') != string::npos) {
            // Dạng RXCY
            int rIndex = input.find('R') + 1;
            int cIndex = input.find('C');
            int row = stoi(input.substr(rIndex, cIndex - rIndex));
            int col = stoi(input.substr(cIndex + 1));

            // Chuyển cột dạng số thành chữ
            string column = numberToColumn(col);
            cout << column << row << endl;

        } else {
            // Dạng ColumnNumber
            int i = 0;
            while (isalpha(input[i])) i++;

            // Cột là phần ký tự, hàng là phần số
            string columnPart = input.substr(0, i);
            int rowPart = stoi(input.substr(i));

            // Chuyển cột dạng chữ thành số
            int columnNumber = columnToNumber(columnPart);
            cout << "R" << rowPart << "C" << columnNumber << endl;
        }
    }

    return 0;
}
