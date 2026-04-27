#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter year: ";
    cin >> year;

    if (year % 4 == 0) {
        // Agar 4 se divide ho gaya, to mazeed andar check karo
        if (year % 100 == 0) {
            // Agar 100 se bhi ho gaya, to 400 lazmi check karna hai
            if (year % 400 == 0) {
                cout << year << " is a Leap Year.";
            } else {
                cout << year << " is NOT a Leap Year.";
            }
        } else {
            // 4 se hua par 100 se nahi, matlab leap year hai (e.g. 2024)
            cout << year << " is a Leap Year.";
        }
    } else {
        // Agar 4 se hi divide nahi hua
        cout << year << " is NOT a Leap Year.";
    }

    return 0;
}
